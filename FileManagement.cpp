//
// Created by Sammy Timmins on 8/31/20.
//
#include <iostream>
#include "FileManagement.h"

using namespace std;

void readStopWords(ifstream &stopWordsFile, set<DSString>& stopWords) //reads in the stop words from stopwords.txt and adds them to the stopWords set
{
    if(!stopWordsFile.is_open())
    {
        cout << "Unable to open stop words file." << endl;
        exit(1);
    }

    char buffer[15];
    DSString line;
    int x = 1;

    while(stopWordsFile.getline(buffer, 15)) //reads in words and adds them to the set
    {
        line = buffer;
        stopWords.insert(line);
    }
}

void readData(ifstream &reviewsFile, vector<DSString>& reviews, vector<DSString>& sentiments) //read in and parse all 50k reviews into reviews vector and sentiments vector
{
    if(!reviewsFile.is_open())
    {
        cout << "Unable to open reviews file" << endl;
        exit(1);
    }

    vector<DSString> reviewAndSentiment;
    char buffer[14000];
    DSString line;

    reviewsFile.getline(buffer, 17); //"removes" the header of the .csv file

    while(reviewsFile.getline(buffer, 14000)) //parses the IMDB reviews file into individual lines
    {
        line = buffer;
        reviewAndSentiment.push_back(line);
    }

    for(int i = 0; i < reviewAndSentiment.size(); i++)
    {
        int length = reviewAndSentiment.at(i).getCapacity();
        sentiments.push_back(reviewAndSentiment.at(i).substr(length - 9, length)); //reads the last 8 characters of the line which is the sentiment and adds it to the sentiment vector
        reviews.push_back(reviewAndSentiment.at(i).substr(0, length - 10)); //adds the review without the sentiment to the reviews vector
    }
}

//add removal of stop words to this function
void splitReviewsAndRemovePunctuation(vector<vector<DSString>>& tokens, vector<DSString>& reviews, set<DSString>& stopWords, const int start, const int size) //splits the reviews into tokens and removes any numbers and punctuations
{
    for(int i = start; i < start + size; i++)
    {
        vector<DSString> words; //vector of the words that'll be put into the tokens vector
        DSString src = "", dest = ""; //src to iterate through the individual words dest to copy the words into the words array without numbers or punctuation
        src = reviews.at(i);
        for(int j = 0; j < src.getLength(); j++)
        {
            if(src[j] != ' ' && isalpha(src[j]) != 0) //used to remove punctuation and numbers as well as make all character lowercase for later comparisons
            {
                src[j] = tolower(src[j]);
                dest = dest + src[j];
            }
            else if(src[j] == ' ') //adds word to tokens vector at the end of the word
            {
                dest = dest + '\0';
                if(!(stopWords.count(dest) > 0))
                {
                    words.push_back(dest);
                }
                dest = "";
            }

            if (j == src.getLength() - 1) //when the end of the review is reached adds last word and moves to next review
            {
                dest = dest + '\0';
                words.push_back(dest);
            }
        }
        tokens.push_back(words); //adds the words vector for the single review to the tokens vector
    }
}

void addToVocab(vector<vector<DSString>>& tokens, vector<DSString>& sentiments, map<DSString, int>& vocabulary) //adds words to the vocabulary map and sets the sentiment point values
{
    for(int i = 0; i < tokens.size(); i++)
    {
        for(int j = 0; j < tokens.at(i).size(); j++)
        {
            if(vocabulary.count(tokens.at(i).at(j)) > 0) //checks if word has already been put in map
            {
                if(sentiments.at(i) == "positive") //if the review is positive increments the element for that word by 1 to increase sentiment value
                {
                    int x = vocabulary[tokens.at(i).at(j)];
                    vocabulary[tokens.at(i).at(j)] = x + 1;
                } else //if the review is negative decrements sentiment point value stored as the element of the map
                {
                    int x = vocabulary[tokens.at(i).at(j)];
                    vocabulary[tokens.at(i).at(j)] = x - 1;
                }
            } else //if the word is not in the vocabulary map adds the word to the map and sets the sentiment point value to 0
            {
                vocabulary[tokens.at(i).at(j)] = 0;
            }
        }
    }

    map<DSString, int>::iterator itr;
    for(itr = vocabulary.begin(); itr != vocabulary.end(); ++itr) //removes words from the vocabulary map that have point values that are too high or too low to increase accuracy of classifier
    {
        if(((itr->second > -15) && (itr->second < 15)) || (itr->second > 100) || (itr->second < -135))
        {
            vocabulary.erase(itr);
        }
    }
}

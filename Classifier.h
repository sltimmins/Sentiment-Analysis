//
// Created by Sammy Timmins on 9/7/20.
//

#ifndef S20_PA01_SENTIMENTANALYSIS_CLASSIFIER_H
#define S20_PA01_SENTIMENTANALYSIS_CLASSIFIER_H

#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <vector>
#include "DSString.h"
#include "FileManagement.h"

using namespace std;

DSString classify(vector<vector<DSString>>& tokens, int i, map<DSString, int>& vocabulary) //classifys the reviews
{
    int reviewPoints = 0;
    DSString toReturn;
    for(int j = 0; j < tokens.at(i).size(); j++) //loops through the words in the token vector and gets the sentiment points for that word from the vocabulary map the increases or decreases the total review points by that value
    {
        if(vocabulary.count(tokens.at(i).at(j)) > 0)
        {
            reviewPoints += vocabulary[tokens.at(i).at(j)];
        }
    }
    if(reviewPoints >= 0) //if the total points for the review is positive it returns positive sentiment
    {
        toReturn = "positive";
    } else //if the points are negative returns negative sentiment
    {
        toReturn = "negative";
    }
    return toReturn;
}

void run(ifstream & reviewsFile, ofstream& fout, ifstream& stopWordsFile)
{
    set<DSString> stopWords; //set of stop words from stopwords.txt
    map<DSString, int> vocabulary;//map of all the words in the reviews that are not removed as the key and the sentiment point value as the element
    vector<DSString> reviews, sentiments; //vector of the entire review and sentiment: indexes match for review and the sentiment
    vector<vector<DSString>> trainTokens, testTokens; //a vector of vectors where the inner vector is a vector of each individual word in the reviews excluding numbers, punctuation, and stop words
    vector<int> incorrectClassifications; //vector of integers that contains the indexes of the incorrectly classified reviews
    int trainSize = 40000, testSize = 10000; //sizes of the training group and testing group
    float numberCorrect = 0; //number of reviews correctly classified

    readStopWords(stopWordsFile, stopWords); //fills in the set of stop words from the stopwords.txt
    readData(reviewsFile, reviews, sentiments); //parses the reviews and sentiments into their respective vectors
    splitReviewsAndRemovePunctuation(trainTokens, reviews, stopWords, 0, trainSize); //takes the words from the reviews vector and removes punctuation, numbers, and stop words then adds the individual words to the trainTokens vector
    addToVocab(trainTokens, sentiments, vocabulary); //adds the training words to the vocab map and assigns sentiment point values

    splitReviewsAndRemovePunctuation(testTokens, reviews, stopWords, trainSize, testSize); //takes the words from the reviews vector and removes punctuation, numbers, and stop words then adds the individual words to the testTokens vector
    //adds words that show up often in reviews and assigns them high point values in order to gain more accuracy in the classifier
    DSString good = "good", bad = "bad", highly = "highly", awful = "awful", terrible = "terrible", enjoyed = "enjoyed", enjoy = "enjoy", worst = "worst";
    vocabulary[good] = 200;
    vocabulary[bad] = -200;
    vocabulary[highly] = 200;
    vocabulary[awful] = -200;
    vocabulary[terrible] = -200;
    vocabulary[enjoyed] = 200;
    vocabulary[enjoy] = 200;
    vocabulary[worst] = -1000;

    for(int i = 0; i < testTokens.size(); i++) //classifies the review and then increments the correct count if the classification is correct or pushes the number of the incorrect review to the incorrect reviews vector
    {
        DSString testedSentiment;
        testedSentiment = classify(testTokens, i, vocabulary); //sets testedSentiment to the classified sentiment of the classifier

        if(testedSentiment == sentiments.at(40000 + i))
        {
            numberCorrect += 1;
        } else
        {
            incorrectClassifications.push_back(40000 + i);
        }
    }

    float percentage = numberCorrect / 10000; //calculates accuracy
    fout << percentage << endl;

    for(int i = 0; i < incorrectClassifications.size(); i++) //adds the incorrectly classified review indexes to the output.txt file
    {
        fout << incorrectClassifications.at(i) << endl;
    }
}

#endif //S20_PA01_SENTIMENTANALYSIS_CLASSIFIER_H

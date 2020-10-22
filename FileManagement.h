//
// Created by Sammy Timmins on 8/31/20.
//

#ifndef S20_PA01_SENTIMENTANALYSIS_FILEMANAGEMENT_H
#define S20_PA01_SENTIMENTANALYSIS_FILEMANAGEMENT_H

#include <fstream>
#include <vector>
#include <map>
#include <set>
#include "DSString.h"


//change string to DLString when class is made
void readStopWords(ifstream &stopWordsFile, set<DSString>& stopWords);
void readData(std::ifstream &reviewsFile, std::vector<DSString>& reviews, std::vector<DSString>& sentiments);
void splitReviewsAndRemovePunctuation(std::vector<vector<DSString>>& tokens, std::vector<DSString>& reviews, set<DSString>& stopWords, const int start, const int size);
void addToVocab(std::vector<vector<DSString>>& tokens, vector<DSString>& sentiments, map<DSString, int>& vocabulary);

#endif //S20_PA01_SENTIMENTANALYSIS_FILEMANAGEMENT_H

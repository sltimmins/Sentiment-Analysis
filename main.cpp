// stop words file: https://gist.github.com/larsyencken/1440509

//CATCH_CONFIG_RUNNER tells the catch library that this
//project will now explicitly call for the tests to be run.
#define CATCH_CONFIG_RUNNER
#include <iostream>
#include <fstream>
#include "Classifier.h"
#include "catch.hpp"

//A macro used in main to determine if you want to run
//the tests or not. If you don't want to run your tests,
//change true to false in the line below.
#define TEST false

/*
* runCatchTests will cause Catch to go ahead and
* run your tests (that are contained in the tests.cpp file.
* to do that, it needs access to the command line
* args - argc and argv. It returns an integer that
* ultimately gets passed back up to the operating system.
* See the if statement at the top of main for
* a better overview.
*/
int runCatchTests(int argc, char* const argv[])
{
    //This line of code causes the Catch library to
    //run the tests in the project.
    return Catch::Session().run(argc, argv);
}

using namespace std;

int main(int argc, char* argv[]) {

    if (TEST)
    {
        return runCatchTests(argc, argv);
    }

    ifstream reviewsFile, stopWordsFile;

    reviewsFile.open(argv[1]); //opens file of reviews and sentiments
    stopWordsFile.open(argv[2]); //opens stopwords.txt file
    ofstream fout(argv[3]); //opens up the output file to be used at program end

    run(reviewsFile, fout, stopWordsFile); //run the classifier algo
    //close all files
    reviewsFile.close();
    fout.close();
    stopWordsFile.close();

    return 0;
}

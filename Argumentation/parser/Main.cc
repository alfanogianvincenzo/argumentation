/**
 * \file Main.cc
 * \brief Main file for CoQuiAAS
 * \author Jean-Marie Lagniez, Emmanuel Lonca, Jean-Guy Mailly
 * \version 1.0
 * \date 14/10/2015
 *
 * Main file for CoQuiAAS: a solver for abstract argumentation problems
 * CoQuiAAS aims to resolve classical problems for abstract argumentation:
 * - Compute an extension of an AF given a semantics
 * - Compute all the extensions of an AF given a semantics
 * - Decide if an argument is skeptically accepted by an AF given a semantics
 * - Decide if an argument is credulously accepdted by an AF given a semantics
 *
 * Possible semantics are the usual ones from Dung's seminal paper: COMPLETE, PREFERRED, STABLE, GROUNDED
 *
 */

#include <iostream>
#include <fstream>
#include <ctime>
#include <pthread.h>

#include "../parser/AspartixFormatParser.h"

using namespace std;

#define MAIN_UNSUPPORTED_FILE_FORMAT_MSG "ERR:: UNSUPPORTED FILE FORMAT"



int main(int argc, char** argv){


  // parse instance depending on the format and the file
  ifstream file(string(argv[1]),ios::in);
  AspartixFormatParser *parser = new AspartixFormatParser(&file);
  if(!parser) {
    cerr << MAIN_UNSUPPORTED_FILE_FORMAT_MSG << endl;
    return 2;
  }
  parser->parseInstance();
  file.close();
cout<<"VARS="<<parser->getVarMap()->nVars();
  delete parser;

  return 0;
}



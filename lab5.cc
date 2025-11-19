// Copyright (C) 2025 Sarvesh Kulkarni <sarvesh.kulkarni@villanova.edu>
// If you are a student in the ECE 2161 lab, you may use this code.
// Permission is NOT granted to use this code for non-educational purposes.
// Write code for bubble sort and merge sort and call the functions in main.

// WARNING! WARNING! WARNING!
// This program declares *very* large arrays. If you have not increased your
// stack space, expect a segmentation fault. In order to increase your
// stack space, run the following command from your terminal:
//      ulimit -s 819200

#include <iostream>
#include <ctime>
#include "myheaders.h"

using namespace std;

int main() {

    int choice, sz;
    long data[MAXSIZE], wData[MAXSIZE];
    double begin_time, end_time, cpu_time_used;
    string ifilename, ofilename;

    while (1) {

        printmenu();
        cin >> choice;

        switch (choice) {

            //-------------------------------
            // CASE 1: READ INPUT FILE
            //-------------------------------
            case 1:

                ifilename = "test.txt";
                sz = readfile(ifilename, data);

                if (sz < 0) {
                    cerr << endl 
                         << "ERROR: Input File Not Found or File cannot be opened." << endl;
                    cerr << "        Please check that the file exists, its path, and try again!"
                         << endl << endl;
                    return 0;
                }
                else 
                    cout << endl << "File size is: " << sz << endl;

                break;


            //-------------------------------
            // CASE 2: SORT FUNCTION A
            //-------------------------------
            case 2:

                for (long i = 0; i < sz; i++)
                    wData[i] = data[i];

                begin_time = clock();

                A_sort(wData, sz);

                end_time = clock();

                cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
                cout << endl << "(A)Sort ran for " << cpu_time_used << " secs.";

                ofilename = "lab5_A_out.txt";
                writefile(wData, sz, ofilename);

                if (sz < 0) {
                    cerr << endl << "ERROR: Output File could not be opened." << endl;
                    cerr << "        Quitting Now!" << endl << endl;
                    return 0;
                }
                else 
                    cout << endl << "Output written to " << ofilename << endl;

                break;


            //-------------------------------
            // CASE 3: SORT FUNCTION B
            //-------------------------------
            case 3:

                for (long i = 0; i < sz; i++)
                    wData[i] = data[i];

                begin_time = clock();

                B_sort(wData, sz);

                end_time = clock();

                cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
                cout << endl << "(B)Sort ran for " << cpu_time_used << " secs.";

                ofilename = "lab5_B_out.txt";
                writefile(wData, sz, ofilename);

                if (sz < 0) {
                    cerr << endl << "ERROR: Output File could not be opened." << endl;
                    cerr << "        Quitting Now!" << endl << endl;
                    return 0;
                }
                else 
                    cout << endl << "Output written to " << ofilename << endl;

                break;


            //-------------------------------
            // CASE 4: SORT FUNCTION C
            //-------------------------------
            case 4:

                for (long i = 0; i < sz; i++)
                    wData[i] = data[i];

                begin_time = clock();
                C_sort(wData, sz);
                end_time = clock();

                cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
                cout << endl << "(C)Sort ran for " << cpu_time_used << " secs.";

                ofilename = "lab5_C_out.txt";
                writefile(wData, sz, ofilename);

                if (sz < 0) {
                    cerr << endl << "ERROR: Output File could not be opened." << endl;
                    cerr << "        Quitting Now!" << endl << endl;
                    return 0;
                }
                else
                    cout << endl << "Output written to " << ofilename << endl;

                break;


            //-------------------------------
            // CASE 5: SORT FUNCTION D
            //-------------------------------
            case 5:

                for (long i = 0; i < sz; i++)
                    wData[i] = data[i];

                begin_time = clock();
                D_sort(wData, sz);
                end_time = clock();

                cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
                cout << endl << "(D)Sort ran for " << cpu_time_used << " secs.";

                ofilename = "lab5_D_out.txt";
                writefile(wData, sz, ofilename);

                if (sz < 0) {
                    cerr << endl << "ERROR: Output File could not be opened." << endl;
                    cerr << "        Quitting Now!" << endl << endl;
                    return 0;
                }
                else
                    cout << endl << "Output written to " << ofilename << endl;

                break;


            //-------------------------------
            // CASE 6: SORT FUNCTION E
            //-------------------------------
            case 6:

                for (long i = 0; i < sz; i++)
                    wData[i] = data[i];

                begin_time = clock();
                E_sort(wData, sz);
                end_time = clock();

                cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
                cout << endl << "(E)Sort ran for " << cpu_time_used << " secs.";

                ofilename = "lab5_E_out.txt";
                writefile(wData, sz, ofilename);

                if (sz < 0) {
                    cerr << endl << "ERROR: Output File could not be opened." << endl;
                    cerr << "        Quitting Now!" << endl << endl;
                    return 0;
                }
                else
                    cout << endl << "Output written to " << ofilename << endl;

                break;


            //-------------------------------
            // CASE 7: SORT FUNCTION F
            //-------------------------------
            case 7:

                for (long i = 0; i < sz; i++)
                    wData[i] = data[i];

                begin_time = clock();
                F_sort(wData, sz);
                end_time = clock();

                cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
                cout << endl << "(F)Sort ran for " << cpu_time_used << " secs.";

                ofilename = "lab5_F_out.txt";
                writefile(wData, sz, ofilename);

                if (sz < 0) {
                    cerr << endl << "ERROR: Output File could not be opened." << endl;
                    cerr << "        Quitting Now!" << endl << endl;
                    return 0;
                }
                else
                    cout << endl << "Output written to " << ofilename << endl;

                break;


            //-------------------------------
            // CASE 0: EXIT PROGRAM
            //-------------------------------
            case 0:
                cout << endl << "Received program exit command - I QUIT!" << endl;
                return 0;


            //-------------------------------
            // DEFAULT: INVALID INPUT
            //-------------------------------
            default:
                cout << endl << "Incorrect selection, try again from the menu below." << endl;
        }
    } // while loop

} // main

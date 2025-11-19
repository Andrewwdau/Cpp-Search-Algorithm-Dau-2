// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!


#ifndef MYHEADERS_H
#define MYHEADERS_H

#include <string>
using namespace std;

#define MAXSIZE 2100000

// Provided functions
void printmenu();
void printarray(long data[], long size);
int  readfile(string infilename, long data[]);
int  writefile(long data[], long size, string outfilename);

// Sorting function prototypes
void A_sort(long arr[], long n);
void B_sort(long arr[], long n);
void C_sort(long arr[], long n);
void D_sort(long arr[], long n);
void E_sort(long arr[], long n);
void F_sort(long arr[], long n);

#endif

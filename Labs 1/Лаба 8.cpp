#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#define MAX 80
using namespace std;
int main () {
 char s[MAX];
  cout<<"Input the text:"; 
 gets(s);
 char *p=strtok (s," \n");
 if (p==NULL) {
  printf ("Empty string"); getchar(); exit(1);
 }
 int k=0;
 while (p!=NULL) {
  int len=strlen(p);
  if (len>0 && len==4) { k++; }
  p=strtok (NULL," \n");
 }
 cout<<"k="<<k<<endl;
 return 0;
 }

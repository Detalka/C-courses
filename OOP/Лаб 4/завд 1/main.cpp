#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;
int main() {
 char s[100];
 gets(s); 
 int  number [100];
 int n =strlen(s);
 char * pch = strtok (s," "),  // �������� ������ �����
         * word = 0; // ����� ������� �����
		int length = strlen(pch);          // ���������� ������ ������� �����
 
    int maxLen = 0; // ����� ������� �����
 
      while (pch != NULL)                         // ���� ���� �����
      {
          length = strlen(pch);        // ���������� ������ �����
 
          if (maxLen < length )        // ���������� ����� ������� �����
          {
              maxLen = length;
              word = pch;              // ��������� ��������� �� ������� �����
          }
 
          pch = strtok (NULL, " "); // �������� ��������� �����
      }
      cout << "����� ������� �����: " << word
           << " , ��� ����� �����: " << maxLen
           << " �������� " << endl;
           
  char *s1 = new char[n];
 for (int i=0; i<n; i++){
 	s1[i]=tolower(s[i]);
 	s1[n]='\n';
 }
 cout<<s1;
	return 0;
}

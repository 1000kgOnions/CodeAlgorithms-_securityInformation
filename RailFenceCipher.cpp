#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;

string EncryptRF(string plaintext, int key)
{
  // tạo ma trận để mã hóa
  // key = số hàng , length(plaintext) = số cột
  char rail[key][(plaintext.length())];

  for (int i = 0; i < key; i++)
    for (int j = 0; j < plaintext.length(); j++)
      rail[i][j] = '/';

  // In các chữ theo đường ziczac
  bool check = false;
  int row = 0, col = 0;
  for (int i = 0; i < plaintext.length(); i++)
  {
    // Nếu là hàng đầu hoặc cuối thì check = true
    if (row == 0 || row == key - 1)
      check = !check;

    // gán chữ cho từng cột
    rail[row][col++] = plaintext[i];

    // Nếu check =true thì đến hàng+1 còn false thì hàng -1
    check ? row++ : row--;
  }

  //Đọc theo từng dòng của ma trận để ra được bản mã
  string result;
  for (int i = 0; i < key; i++)
    for (int j = 0; j < plaintext.length(); j++)
      if (rail[i][j] != '/')
        result.push_back(rail[i][j]);
  return result;
}

int main()
{
  cout << "CipherText:" << EncryptRF("WHENINROMEDOASTHER", 4) << endl;
  system("pause");
}
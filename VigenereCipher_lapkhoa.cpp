#include <iostream>
using namespace std;

//Tạo khóa
string CreateKey(string plaintext, string key)
{
	int x = plaintext.size();

	for (int i = 0;; i++)
	{
		if (key.size() == plaintext.size())
			break;
		key.push_back(key[i]);
	}
	return key;
}

//Encrypt
string cipherText(string plaintext, string key)
{
	string cipher_text;

	for (int i = 0; i < plaintext.size(); i++)
	{
		char x = (plaintext[i] + key[i]) % 26;

		x += 65;

		cipher_text.push_back(x);
	}
	return cipher_text;
}

int main()
{
	string str = "HONESTYISTHEBE";
	//honestyisthebe
	string keyword = "ABADBE";
	//abadbe
	string key = CreateKey(str, keyword);
	string cipher_text = cipherText(str, key);

	cout << "Ciphertext : "
			 << cipher_text << "\n";
	system("pause");
}

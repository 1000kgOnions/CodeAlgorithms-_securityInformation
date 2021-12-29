#include <iostream>
using namespace std;

string encrypt(string text, int s)
{
	string result = "";

	for (int i = 0; i < text.length(); i++)
	{
		// Mã hóa nếu là chữ hoa (65-90)
		if (isupper(text[i]))
			result += char(int(text[i] - 65 + s) % 26 + 65);

		// Mã hóa nếu là chữ thường (97-122)
		else
			result += char(int(text[i] - 97 + s) % 26 + 97);
	}

	return result;
}

int main()
{
	string text = "AWOMANGIVESANDFO";
	int s = 11;
	cout << "Text : " << text;
	cout << "\nShift: " << s;
	
	cout << "\nCipher: " << encrypt(text, s);
	system("pause");
}

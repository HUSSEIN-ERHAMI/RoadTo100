#include<iostream>
#include<string>
using namespace std;
string ReadText()
{
	string Text;
	cout << " Please Enter the Text " << endl;
	getline(cin, Text);
	return Text;
}
string Encryption(string Text, short Encryption)
{
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i]= char( (int)Text[i] + Encryption);
		
	}
	return Text;
}
string Decryption(string Text, short Encryption)
{
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - Encryption);
	}
	return Text;
}
int main()
{
	const short EncryptionKey = 5;
	string Text = ReadText();
	string TextAfterencryption = Encryption(Text, EncryptionKey);
	string TextAfterdecryption = Decryption(TextAfterencryption, EncryptionKey);
	cout << " Text After Encryption is : " << TextAfterencryption << endl;
	cout << " Text After Decryption is : " << TextAfterdecryption << endl;
	return 0;


}
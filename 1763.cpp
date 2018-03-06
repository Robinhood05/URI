#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;
int main()
{
	string pais;
	
	map <string, string> ling;
	ling.insert(pair <string,string> ("brasil", "Feliz Natal!"));
	ling.insert(pair <string, string> ("alemanha", "Frohliche Weihnachten!"));
	ling.insert(pair <string, string> ("austria", "Frohe Weihnacht!"));
	ling.insert(pair <string, string> ("coreia", "Chuk Sung Tan!"));
	ling.insert(pair <string, string> ("espanha", "Feliz Navidad!"));
	ling.insert(pair <string, string> ("grecia", "Kala Christougena!"));
	ling.insert(pair <string, string> ("estados-unidos", "Merry Christmas!"));
	ling.insert(pair <string, string> ("inglaterra", "Merry Christmas!"));
	ling.insert(pair <string, string> ("australia", "Merry Christmas!"));
	ling.insert(pair <string, string> ("portugal", "Feliz Natal!"));
	ling.insert(pair <string, string> ("suecia", "God Jul!"));
	ling.insert(pair <string, string> ("turquia", "Mutlu Noeller"));
	ling.insert(pair <string, string> ("argentina", "Feliz Navidad!"));
	ling.insert(pair <string, string> ("chile", "Feliz Navidad!"));
	ling.insert(pair <string, string> ("mexico", "Feliz Navidad!"));
	ling.insert(pair <string, string> ("antardida", "Merry Christmas!"));
	ling.insert(pair <string, string> ("canada", "Merry Christmas!"));
	ling.insert(pair <string, string> ("irlanda", "Nollaig Shona Dhuit!"));
	ling.insert(pair <string, string> ("belgica", "Zalig Kerstfeest!"));
	ling.insert(pair <string, string> ("italia", "Buon Natale!"));
	ling.insert(pair <string, string> ("libia", "Buon Natale!"));
	ling.insert(pair <string, string> ("siria", "Milad Mubarak!"));
	ling.insert(pair <string, string> ("marrocos", "Milad Mubarak!"));
	ling.insert(pair <string, string> ("japao", "Merii Kurisumasu!"));
 
	while (cin>>pais)
	{
		if (ling.find(pais) != ling.end())
			cout << ling[pais] << endl;
		else
			cout << "--- NOT FOUND ---" << endl;
	}
}

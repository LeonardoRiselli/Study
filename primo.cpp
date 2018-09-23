#include <iostream>
using namespace std;

int main(){

	float orae, orau, prezzo, tempo;
	
	cout<<"dimmi orario entrata: "
	cin>>orae;
	cout<<"dimmi orario uscita: "
	cin>>orau;
	
	if (orau < orae){
		cout<<"orari inseriti non validi"<<endl;
		}
		
	else {
		tempo=orau-orae;
		
		cout<<"tempo totale di permanenza= "<<tempo<<endl;
		
		prezzo=tempo*5;
		
		cout<<"prezzo complessivo del parcheggio= "<<prezzo<<" euro"<<endl;
		
	}
	
	return 0;
	system("PAUSE");
}

/* da inviare a AZappulo11@gmail.com */
	
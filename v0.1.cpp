#include "1darboHeaderisVect.h"


double generuotiGalvid( vector<float>&nd, int egz)
{
    double suma=0;
    for (int i =0; i<nd.size(); i++) 
    {
        suma=suma+nd[i];
    }
    double vidurkis=suma/nd.size();
    double Gal= 0.4 * vidurkis + 0.6 * egz;
    return Gal;
}

double generuotiGalmed(vector<float>nd)
{
    sort(nd.begin(), nd.end()); //rikiuoja maz tvarka

    int kiek= nd.size();
    if(kiek%2==1)
    {
        return nd[kiek/2]; //jei nelyginis, tada vidurine reiksme
    }
    else 
    {
        return( nd[kiek/2-1] + nd[kiek/2])/2.0; //jei lyginis, dvieju viduriniu vidurkis
    }
}

double pasirinktasGal(vector<float>&nd, int egz, char kaip)
{
    double Gal=0;

    if( kaip=='v')
    {
        Gal=generuotiGalvid(nd,egz);
    }
    if( kaip=='m')
    {
        Gal= 0.4 * generuotiGalmed(nd) + 0.6 * egz;
    }
    return Gal;
}

void randomPaz(vector<float>& nd, int& egz, int kiek_nd)
{
    nd.clear();
    for(int i=0; i<kiek_nd; i++)
    {
        nd.push_back(rand()%10+1); //paz nuo 1 iki 10
    }
    egz=rand()%10+1; //egzo balas
}

int main() {
srand(time(0)); //pradinis seed nustatymas

vector<studentas> grupe;
char pasirinkimas;

cout<<"Koki metoda renkates gal. balui skaiciuoti?\n";
cout<<"Jei VIDURKI, rasykite [v], jei MEDIANA, rasykite [m]\n";
cin>>pasirinkimas;
while (pasirinkimas != 'v' && pasirinkimas != 'm') {
        cout << "Neteisingas pasirinkimas! Įveskite v arba m: ";
        cin >> pasirinkimas;
}
do 
{
    studentas laik;
    char ar_generuoti;

    cout<<"Studento vardas: ";
    cin>>laik.Vard;
    
    cout<<"Studento pavarde: ";
    cin>>laik.Pav;
    
    cout<<"Ar generuoti pazymius atsitiktinai? (t/n) ";
    cin>>ar_generuoti;

    if(ar_generuoti=='t')
    {
        int kiek_nd;
        cout<<"Kiek nd pazymiu generuoti? ";
        cin>>kiek_nd;

        randomPaz(laik.nd, laik.egz, kiek_nd);
    }
    else 
    {
    cout<<"Namu darbu pazymiai ";
    float paz;
        while(true)
        {
            cin>>paz;
            if (cin.peek()=='\n') break; //jei enter, ciklas stabdomas
            if(cin.fail()) break; //jei neteisingas inputas, stabdyti
            laik.nd.push_back(paz);
        }
        
    cout<<"Studento egzaminas : ";
    cin>>laik.egz; 
      
    }
    laik.Gal= pasirinktasGal(laik.nd, laik.egz, pasirinkimas);
    grupe.push_back(laik);

    cout<<"Ar dar vesite kita studenta? (t/n): ";
    char ats;
    cin>>ats;
    if(ats=='n') break;

} while (true);
if (pasirinkimas=='v')
{
    cout<<"Vardas"<<setw(15)<<"Pavarde"<<setw(15)<< "Galutinis (Vid.)"<<setw(15)<<endl;
    cout<<"--------------------------------------------"<<endl;
}
else 
{
    cout<<"Vardas"<<setw(15)<<"Pavarde"<<setw(15)<< "Galutinis (Med.)"<<endl;
    cout<<"--------------------------------------------"<<endl;
}
 for (auto a : grupe) 
 {
    cout<<a.Vard<<setw(15)<<a.Pav<<setw(20)<<fixed<<setprecision(2)<<a.Gal<<endl;
 }
/*for(auto a : grupe)
{
    cout<<a.Vard<<"  "<<a.Pav<<endl;
}*/
// g++ -o v0.1 "v0.1.cpp"
//./v0.1

}
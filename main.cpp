#include "main.h"
#include "word.h"

int main(){
    multiset<Word> tekstas;
    set<Word> zodziai;
    vector<int> eil;
    set<string> url;
    string eilute;
    int eil_nr = 0;

    std::ifstream in1("tekstas.txt");

    if (in1.fail())
        throw "Source file not found!";

    while(getline(in1, eilute)){
        eil_nr++;
        std::istringstream in2(eilute);
        string a;
        while(in2 >> a) {
            if(std::regex_match(a, std::regex(R"(^(https?:\/\/)?([\da-z\.-]+)\.([a-z\.]{2,6})([\/\w \.-]*)*\/?$)"))){
                url.insert(a);
            }
            else{
                std::regex pattern("\\w+");
                for(std::sregex_iterator it(a.begin(), a.end(), pattern), it_end;it != it_end;++it){
                    zodziai.insert(Word((*it)[0]));
                    tekstas.insert(Word((*it)[0],eil_nr));
                }
            }
        }
    }
    // URL PRINT
    cout << "Tekste rasti URL adresai:" << endl;

    for(auto i : url)
        cout << i << endl;
    cout << endl;

    // WORD PRINT
    for(auto it = zodziai.begin(); it != zodziai.end(); ++it){
        auto n = 0;
        eil.clear();
        for(auto i = tekstas.begin(); i != tekstas.end(); ++i) {
            n = tekstas.count(it->get_tekstas());
            if(it->get_tekstas() == i->get_tekstas()){
                eil.push_back(i->get_eilute());
            }
        }
        if(n >= 2){
            cout << "\"" << it->get_tekstas() << "\" zodis tekste rastas " << n << " kartus (Eilutese: ";
            for(auto i : eil)
                cout << i << " ";
            cout << ")" << endl;
        }
    }
    return 0;
}
#include <iostream>

using namespace std;
void print_array(string arr[10000]){
    for(int i=0; i<100; i++){
        cout<<arr[i];
    }
}
string arr1="abcdefghigklmnopqrstuvwxyzABCDEFGHIGKLMNOPQRSTUVWXYZ";
string arr[]= {"aaaaa","aaaab","aaaba","aaabb","aabaa","aabab","aabba","aabbb","abaaa","abaab","ababa","ababb","abbaa","abbab","abbba","abbbb","baaaa","baaab","baaba","baabb","babaa","babab","babba","babbb","bbaaa","bbaab","AAAAA","AAAAB","AAABA","AAABB","AABAA","AABAB","AABBA","AABBB","ABAAA","ABAAB","ABABA","ABABB","ABBAA","ABBAB","ABBBA","ABBBB","BAAAA","BAAAB","BAABA","BAABB","BABAA","BABAB","BABBA","BABBB","BBAAA","BBAAB"};
int main()
{
    cout<<"Ahlan ya user ya hapipi"<<endl;
    cout<<"What do you like to do today "<<endl;
    cout<<"1- Cipher a message"<<endl;
    cout<<"2- Decipher a message"<<endl;
    cout<<"3- End"<<endl;
    int num;
    cout<<"Enter number : ";
    cin>>num;
    string arr0[10000];
    string c;
    string x;
    int i;
    int j;
    string final;
    if(num==1){
        cout<<"Enter your message to cipher : ";
        cin.ignore();
        getline(cin,c);
        for(i=0; i<c.length(); i++){
            if (c[i]==' '){
                arr0[i]=(char)(32);
            }
            else{
                for(j=0; j<52; j++){
                    if(c[i]==arr1[j]){
                        arr0[i]=arr[j];
                    }
                }
            }
        }
        print_array(arr0);
    }
    else if (num==2){
        int counterx = 0;
        cout<<"Enter your message to Decipher : ";
        cin.ignore();
        getline(cin,c);
        for(j=0; j<c.size(); j++){
            if (c[j]==' '){
                final.insert(final.end(),1,(char)(32));
            }
            else{
                x.insert(x.end(),1,c[j]);
                counterx++;
            }
            if (counterx == 5){
                for (i=0; i<52; i++){
                    if(x==arr[i]){
                        final.insert(final.end(),1,arr1[i]);
                    }
                }
                x = "";
                counterx=0;
            }
        }
        cout << final;
    }
    else
        cout<<"                           End"<<endl;
    return 0;
}

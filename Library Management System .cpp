#include<iostream>
#include<vector>
using namespace std;
int main (){
vector<string>books;
vector<bool>issued;
int ch;
while (true){
cout << "\n 1.Add 2.View 3.Issue 4.Return 5.Exit\n";
cin>>ch;
if (ch==1){
string b;
cin.ignore ();
cout << "Book name";
getline(cin,b);
books.push_back (b);
issued.push_back (false);
}
else if(ch==2){
for (int i=0; i<books.size(); i++)
cout << i+1 << "." << books [i] <<(issued [i]?"(Issued)\n":"(Available)\n");
}
else if (ch==3){
int n; cin>>n;
issued [n-1]=true;
}
else if (ch==4){
int n; cin>>n;
issued [n-1]= false;
}
else if (ch==5) break;
}
}
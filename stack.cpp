#include<iostream>
#include<vector>
using namespace std;
int main()
{


    vector<int>v={1,2,3,4,5};
    vector<int>::iterator it=v.begin();
    
    v.insert(v.begin()+1,300);
    
    v.erase(v.begin()+2);
    vector<int>copy(2,50);
    v.insert (v.begin()+1,copy.begin(),copy.end());
    v.insert(v.begin()+1,2,50);

    for(auto it=v.begin();it !=v.end();it++)

    {
        cout<<*it<<" ";

    }
    v.size();
    //lastly clear v.clear//


    return 0;


 
}


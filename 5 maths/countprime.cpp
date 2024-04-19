// count number of prime numers strictly less than n


// using brute force === 
// #include<iostream>
// using namespace std;

// bool check(int num){
//     for(int i=2;i<=num/2;i++){
//         if(num%i == 0)
//             return false;
//     }
//     return true;
// }

// int main(){
//     int num;
//     cout<<"Enter the number: ";
//     cin>>num;
//     int count =0;
//     for(int i=2;i<num;i++){
//         if(check(i))
//             count++;
//     }
//     cout<<"There are "<<count<<" prime numbers strictly less then "<<num<<endl;

//     return 0;
// }

// using seive of erastothenes
// time complexcity ==> O(n*log(log n))
#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    int cnt =0;
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;
    // O(n) for outer loop
    for(int i=2;i<=n;i++){
        if(prime[i]){
            cnt++;
            // for inner loop 
            // the loop only runs for -> n/2 + n/3 + n/5 + n/7 + n/11 ............... which is an H.P.
            // so the time complexcity is O(log(log n))
            for(int j=2*i;j<n;j=j+i){
                prime[j] = false;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"There are "<<countPrime(n)<<" numbers between 0 to "<<n<<" ."<<endl;

    return 0;
}
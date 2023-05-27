// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int k;
//         cin>>k;
//         int a[n],b[n];

//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             cin>>b[i];
//         }
//         vector<int>ans;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(abs(b[j]-a[i])<=k){
//                     ans.emplace_back(b[j]);
//                 }
//             }
//         }
//         for(int i=0;i<n;i++){
//             cout<<ans[i]<<" ";
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// #define int long long
// typedef long double ld;

// #define debug(x)                \
//     for (auto element : x)      \
//         cout << element << " "; \
//     cout << endl;
// #define debugp(x)          \
//     for (auto element : x) \
//     cout << element.first << " " << element.second << endl

// #define f(i, k, n) for (int i = 0; i < n; i++)

// typedef vector<int> v;
// typedef map<int, int> mp;
// typedef vector<pair<int, int>> vp;

// const int inf = INT_MAX;
// const int mod = 1e9 + 7; //998244353;
// const double pi = 3.141592653589;

// long long gcd(int a,int b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }

// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }
// struct Node{
//     Node* links[2];

//     bool containskey(int bit){
//         return(links[bit]!=NULL);
//     }

//     Node* get(int bit){
//         return(links[bit]);
//     }

//     void put(int bit,Node* node){
//         links[bit]=node;
//     }
// };
// class Trie{
//     private:
//     Node* root;
//     public:
//     Trie(){
//         root = new Node();
//     }

//     void insert(int num){
//         Node* node = root;
//         for(int j=31;j>=0;j--){
//             int bit = (num>>j)&1;
//             if(!node->containskey(bit)){
//                 node->put(bit,new Node());
//             }
//             node=node->get(bit);
//         }
//     }

//     int getMax(int num){
//         Node* node=root;
//        int maxi=0;

//         for(int i=31;i>=0;i--){
//             int bit = (num>>i)&1;
//             if(node->containskey(!bit)){
//                 maxi = maxi|(1<<i);
//                 node = node->get(!bit);
//             }
//             else{
//                 node=node->get(bit);
//             }
//         }return maxi;
//     }
// };

// int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2)
// {
//     // Write your code here.
//     Trie trie;
//     for(auto &it:arr1){
//         trie.insert(it);
//     }
//     int maxi=0;
//     for(auto &it:arr2){
//         maxi= max(maxi,trie.getMax(it));
//     }return maxi;
// }

// signed main(){
//     int test;
//     cin>>test;
//     while(test--){
//         int n;
//         cin>>n;
//         int a[n];
//         int odd=0;
//         for(int i=0;i<n;i++){
//             cin>>a[i];

//         }
//         sort(a,a+n);

//         for(int i=0;i<n;i++){
//             if(a[i]%2!=0){
//                 odd++;
//             }
//         }
//         if(a[0]%2!=0){
//             cout<<"YES"<<endl;
//         }
//         else{
//             if(odd==0){
//                 cout<<"YES"<<endl;
//             }else{
//                 cout<<"NO"<<endl;
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// #define int long long
// typedef long double ld;

// #define debug(x)                \
//     for (auto element : x)      \
//         cout << element << " "; \
//     cout << endl;
// #define debugp(x)          \
//     for (auto element : x) \
//     cout << element.first << " " << element.second << endl

// #define f(i, k, n) for (int i = 0; i < n; i++)

// typedef vector<int> v;
// typedef map<int, int> mp;
// typedef vector<pair<int, int>> vp;

// const int inf = INT_MAX;
// const int mod = 1e9 + 7; //998244353;
// const double pi = 3.141592653589;

// long long gcd(int a,int b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }

// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }
// struct Node{
//     Node* links[2];

//     bool containskey(int bit){
//         return(links[bit]!=NULL);
//     }

//     Node* get(int bit){
//         return(links[bit]);
//     }

//     void put(int bit,Node* node){
//         links[bit]=node;
//     }
// };
// class Trie{
//     private:
//     Node* root;
//     public:
//     Trie(){
//         root = new Node();
//     }

//     void insert(int num){
//         Node* node = root;
//         for(int j=31;j>=0;j--){
//             int bit = (num>>j)&1;
//             if(!node->containskey(bit)){
//                 node->put(bit,new Node());
//             }
//             node=node->get(bit);
//         }
//     }

//     int getMax(int num){
//         Node* node=root;
//        int maxi=0;

//         for(int i=31;i>=0;i--){
//             int bit = (num>>i)&1;
//             if(node->containskey(!bit)){
//                 maxi = maxi|(1<<i);
//                 node = node->get(!bit);
//             }
//             else{
//                 node=node->get(bit);
//             }
//         }return maxi;
//     }
// };

// int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2)
// {
//     // Write your code here.
//     Trie trie;
//     for(auto &it:arr1){
//         trie.insert(it);
//     }
//     int maxi=0;
//     for(auto &it:arr2){
//         maxi= max(maxi,trie.getMax(it));
//     }return maxi;
// }

// signed main(){
//     int test;
//     cin>>test;
//     while(test--){
//         int n,k;
//         cin>>n>>k;
//         int a[n],b[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i]>>b[i];
//         }

//         sort(b,b+n);

//         vector<int>ans;

//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(abs(b[j]-a[i])<=k){
//                     ans.push_back(b[j]);
//                     break;
//                 }
//             }
//         }

//         for(int i=0;i<n;i++){
//             cout<<ans[i]<<" ";
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long int n,k;
//         cin>>n>>k;
//         if(n%2==0 && k%2!=0){
//             cout<<1<<endl;
//             cout<<n<<endl;
//         }
//         else if(n%2!=0 && k%2==0){
//             cout<<1<<endl;
//             cout<<n<<endl;
//         }
//         else if(n%2==0 && k%2==0){
//             cout<<2<<endl;
//             cout<<n-1<<" "<<1<<endl;
//         }
//         else{
//             cout<<2<<endl;
//             cout<<n-1<<" "<<1<<endl;
//         }
//         if(n>=0){
//         if(n%2==0){
//             if(k%2!=0){
//                 cout<<1<<endl;
//                 cout<<n<<endl;
//             }else{
//                 cout<<2<<endl;
//                 cout<<n-1<<" "<<1<<endl;
//             }
//         }
//         else{
//             if(k%2==0){
//                 cout<<1<<endl;
//                 cout<<n-1<<" "<<1<<endl;
//             }
//             else{
//                 cout<<2<<endl;
//                 cout<<n-1<<" "<<1<<endl;
//             }
//         }
//         }
//         else{

//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// #define int long long
// typedef long double ld;

// #define debug(x)                \
//     for (auto element : x)      \
//         cout << element << " "; \
//     cout << endl;
// #define debugp(x)          \
//     for (auto element : x) \
//     cout << element.first << " " << element.second << endl

// #define f(i, k, n) for (int i = 0; i < n; i++)

// typedef vector<int> v;
// typedef map<int, int> mp;
// typedef vector<pair<int, int>> vp;

// const int inf = INT_MAX;
// const int mod = 1e9 + 7; //998244353;
// const double pi = 3.141592653589;

// long long gcd(int a,int b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }

// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }
// struct Node{
//     Node* links[2];

//     bool containskey(int bit){
//         return(links[bit]!=NULL);
//     }

//     Node* get(int bit){
//         return(links[bit]);
//     }

//     void put(int bit,Node* node){
//         links[bit]=node;
//     }
// };
// class Trie{
//     private:
//     Node* root;
//     public:
//     Trie(){
//         root = new Node();
//     }

//     void insert(int num){
//         Node* node = root;
//         for(int j=31;j>=0;j--){
//             int bit = (num>>j)&1;
//             if(!node->containskey(bit)){
//                 node->put(bit,new Node());
//             }
//             node=node->get(bit);
//         }
//     }

//     int getMax(int num){
//         Node* node=root;
//        int maxi=0;

//         for(int i=31;i>=0;i--){
//             int bit = (num>>i)&1;
//             if(node->containskey(!bit)){
//                 maxi = maxi|(1<<i);
//                 node = node->get(!bit);
//             }
//             else{
//                 node=node->get(bit);
//             }
//         }return maxi;
//     }
// };

// int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2)
// {
//     // Write your code here.
//     Trie trie;
//     for(auto &it:arr1){
//         trie.insert(it);
//     }
//     int maxi=0;
//     for(auto &it:arr2){
//         maxi= max(maxi,trie.getMax(it));
//     }return maxi;
// }

// signed main(){
//     int test;
//     cin>>test;
//     while(test--){
//         int n,k;
//         cin>>n>>k;
//         if(n%k!=0){
//             cout<<1<<endl;
//             cout<<n<<endl;
//         }else{
//             cout<<2<<endl;
//             cout<<n-1<<" "<<endl;
//         }

//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// #define int long long
// typedef long double ld;

// #define debug(x)                \
//     for (auto element : x)      \
//         cout << element << " "; \
//     cout << endl;
// #define debugp(x)          \
//     for (auto element : x) \
//     cout << element.first << " " << element.second << endl

// #define f(i, k, n) for (int i = 0; i < n; i++)

// typedef vector<int> v;
// typedef map<int, int> mp;
// typedef vector<pair<int, int>> vp;

// const int inf = INT_MAX;
// const int mod = 1e9 + 7; //998244353;
// const double pi = 3.141592653589;

// long long gcd(int a,int b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }

// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }
// struct Node{
//     Node* links[2];

//     bool containskey(int bit){
//         return(links[bit]!=NULL);
//     }

//     Node* get(int bit){
//         return(links[bit]);
//     }

//     void put(int bit,Node* node){
//         links[bit]=node;
//     }
// };
// class Trie{
//     private:
//     Node* root;
//     public:
//     Trie(){
//         root = new Node();
//     }

//     void insert(int num){
//         Node* node = root;
//         for(int j=31;j>=0;j--){
//             int bit = (num>>j)&1;
//             if(!node->containskey(bit)){
//                 node->put(bit,new Node());
//             }
//             node=node->get(bit);
//         }
//     }

//     int getMax(int num){
//         Node* node=root;
//        int maxi=0;

//         for(int i=31;i>=0;i--){
//             int bit = (num>>i)&1;
//             if(node->containskey(!bit)){
//                 maxi = maxi|(1<<i);
//                 node = node->get(!bit);
//             }
//             else{
//                 node=node->get(bit);
//             }
//         }return maxi;
//     }
// };

// int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2)
// {
//     // Write your code here.
//     Trie trie;
//     for(auto &it:arr1){
//         trie.insert(it);
//     }
//     int maxi=0;
//     for(auto &it:arr2){
//         maxi= max(maxi,trie.getMax(it));
//     }return maxi;
// }

// signed main(){
//     int test;
//     cin>>test;
//     while(test--){
//         int n;
//         cin >> n;

//         string str;
//         cin >> str;

//         int maxi = 1;
//         int curr = 1;

//         for (int i = 1; i < str.length(); i++) {
//             if (str[i] == str[i - 1]) {
//                 curr++;
//             } else {
//                 maxi = max(maxi, curr);
//                 curr = 1;
//             }
//         }
//         maxi = max(maxi, curr);

//         cout << maxi +1 << endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin >> t;
//   while (t--) {
//     string s;
//     cin >> s;
//     int n = s.length();
//     vector<int> cnt(2, 0);
//     for (int i = 0; i < n; i++) {
//       if (s[i] == '1') {
//         cnt[1]++;
//       } else if (s[i] == '0') {
//         cnt[0]++;
//       }
//     }
//     int mx = max(cnt[0], cnt[1]);
//     int mn = min(cnt[0], cnt[1]);
//     int k = mx - mn;
//     string ans(n, '?');
//     for (int i = 0; i < n; i++) {
//       if (s[i] == '?') {
//         if (k > 0) {
//           ans[i] = '1';
//           k--;
//         } else {
//           ans[i] = '0';
//         }
//       } else {
//         ans[i] = s[i];
//       }
//     }
//     sort(ans.begin(), ans.end());
//     cout << ans << endl;
//   }
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         vector<int> times(n);
//         for (int i = 0; i < n; i++) {
//             cin >> times[i];
//         }

//         sort(times.begin(), times.end());

//         int min_time = times[k - 1] - times[0];

//         for (int i = 1; i <= n - k; i++) {
//             min_time = min(min_time, times[i + k - 1] - times[i]);
//         }

//         cout << min_time << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int t;
//   cin>>t;
//   while(t--){

//   }

// }

// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// typedef long double ld;

// #define debug(x)                \
//     for (auto element : x)      \
//         cout << element << " "; \
//     cout << endl;
// #define debugp(x)          \
//     for (auto element : x) \
//     cout << element.first << " " << element.second << endl

// #define f(i, k, n) for (int i = 0; i < n; i++)

// typedef vector<int> v;
// typedef map<int, int> mp;
// typedef vector<pair<int, int>> vp;

// const int inf = INT_MAX;
// const int mod = 1e9 + 7; // 998244353;
// const double pi = 3.141592653589;

// long long gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }
// struct Node
// {
//     Node *links[2];

//     bool containskey(int bit)
//     {
//         return (links[bit] != NULL);
//     }

//     Node *get(int bit)
//     {
//         return (links[bit]);
//     }

//     void put(int bit, Node *node)
//     {
//         links[bit] = node;
//     }
// };
// class Trie
// {
// private:
//     Node *root;

// public:
//     Trie()
//     {
//         root = new Node();
//     }

//     void insert(int num)
//     {
//         Node *node = root;
//         for (int j = 31; j >= 0; j--)
//         {
//             int bit = (num >> j) & 1;
//             if (!node->containskey(bit))
//             {
//                 node->put(bit, new Node());
//             }
//             node = node->get(bit);
//         }
//     }

//     int getMax(int num)
//     {
//         Node *node = root;
//         int maxi = 0;

//         for (int i = 31; i >= 0; i--)
//         {
//             int bit = (num >> i) & 1;
//             if (node->containskey(!bit))
//             {
//                 maxi = maxi | (1 << i);
//                 node = node->get(!bit);
//             }
//             else
//             {
//                 node = node->get(bit);
//             }
//         }
//         return maxi;
//     }
// };

// int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2)
// {
//     // Write your code here.
//     Trie trie;
//     for (auto &it : arr1)
//     {
//         trie.insert(it);
//     }
//     int maxi = 0;
//     for (auto &it : arr2)
//     {
//         maxi = max(maxi, trie.getMax(it));
//     }
//     return maxi;
// }

// signed main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int n;
//         cin >> n;
//         string str;
//         cin >> str;
//         int count = 0;

//         for (int i = 0; i < n; i++)
//         {
//             if (str[i] == '(')
//                 count++;
//             else
//                 count--;
//         }
//         if (count != 0)
//         {
//             cout << "-1" << endl;
//             continue;
//         }
//         int c = 0;
//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (str[i] == '(')
//                 ans++;
//             else
//                 ans--;
//             if (ans < 0)
//             {
//                 c++;
//                 break;
//             }
//         }
//         ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (str[i] == ')')
//                 ans++;
//             else
//                 ans--;
//             if (ans < 0)
//             {
//                 c++;
//                 break;
//             }
//         }
//         if (c < 2)
//         {
//             cout << 1 << endl;
//             while (n--)
//                 cout << 1 << ' ';
//             cout << endl;
//         }
//         else
//         {
//             int res[n];
//             int i = 0;
//             int j = n - 1;
//             while (i < j)
//             {
//                 if (str[i] == ')' && str[j] == ')')
//                 {
//                     res[i++] = 2;
//                     res[j--] = 1;
//                 }
//                 else if (str[i] == '(' && str[j] == '(')
//                 {
//                     res[i++] = 1;
//                     res[j--] = 2;
//                 }
//                 else if (str[i] == ')' && str[j] == '(')
//                 {
//                     res[j--] = 2;
//                     res[i++] = 2;
//                 }
//                 else
//                 {
//                     res[i++] = 1;
//                     res[j--] = 1;
//                 }
//             }
//             cout << "2" << endl;
//             for (int i = 0; i < n; i++)
//                 cout << res[i] << " ";
//             cout << endl;
//         }
//     }
// }


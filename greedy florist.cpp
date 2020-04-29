int n;
int k;
cin >> n >> k;
vector <int> c(n);
for(int i=0;i<n;i++) cin >> c[i];

vector <int> p(k); // stores how many times a person has bought flowers
int pIndex=0;
int minCost=0;
sort(c.begin(),c.end());

// rotate people to buy from the costliest to the cheapest flowers
for (int i=c.size()-1;i>=0;i--) {
    minCost+=(p[pIndex]+1)*c[i];        
    p[pIndex]++;

    // goto next guy
    pIndex++;
    if (pIndex>=k) pIndex=0;
}

cout << minCost << endl;

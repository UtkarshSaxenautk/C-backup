#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("./input.txt", "r", stdin);
		freopen("./output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	
	int like, dislike;

	unordered_map<string,int> likedIngredients;
	unordered_map<string,int> dislikedIngredients;
	string s;

	while(t--){
		cin >> like;
		for(int i = 0; i < like; i++){
			cin >> s;

			if (likedIngredients.find(s) == likedIngredients.end())
        		likedIngredients.insert(make_pair(s, 1));
    		else
        		likedIngredients[s]++;
		}
		cin >> dislike;
		for(int i = 0; i < dislike; i++){
		    cin >> s;
		    if (dislikedIngredients.find(s) == dislikedIngredients.end())
        		dislikedIngredients.insert(make_pair(s, 1));
    		else
        		dislikedIngredients[s]++;
		}
	}

	for (auto &&x : likedIngredients)
    {
        string ing = x->first;
        if(likedIngredients[ing] <= dislikedIngredients[ing]){
            likedIngredients.erase(likedIngredients.find(ing));
        }
    }
     
     cout << likedIngredients.size() << " ";
     for (auto itr1 = likedIngredients.begin(); itr1 != likedIngredients.end(); itr1++)
    {
        cout << itr1->first << "  ";
     }
}
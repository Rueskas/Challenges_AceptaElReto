#include <iostream>
using namespace std;

int main()
{
   int cases, currentCount, hiddenCount, maxCount;
   string input;
   scanf("%d", &cases);
   scanf("%c");
   for(int i = 0 ; i < cases ; i++){
   		currentCount = maxCount = hiddenCount = 0;
   		getline(cin, input);
   		for(int i = 0 ; i < input.size() ; i++){
   			if(toupper(input[i])== 'I'){
				currentCount++;
				if(currentCount > maxCount){
					maxCount++;
				}
			} else {
				currentCount--;
				if (currentCount < 0){
					hiddenCount++;
					currentCount = 0;
				}
			}	
		}
		printf("%d\n", maxCount + hiddenCount);
   }
}

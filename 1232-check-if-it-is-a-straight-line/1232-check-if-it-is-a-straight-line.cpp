class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int n = coordinates.size();
        
        if(n <= 2){
			return true;
		}
		int x1 = coordinates[0][0];
		int y1 = coordinates[0][1];
		int x2 = coordinates[1][0];
		int y2 = coordinates[1][1];
		for(int i = 2; i <n; i++){
			int x3 = coordinates[i][0];
			int y3 = coordinates[i][1];
			if(y1*(x3 - x2) + y2*(x1 - x3) + y3*(x2 - x1) != 0){   
				return false;
			}
		}
		return true;        
    }
};
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
	int N = 0;
	vector<int> pocket;

	for (int i = 0; i < moves.size(); i ++) {
		N = 0;
		for (int j = 0; j < board.at(moves.at(i)-1).size(); j ++) {
			if (board.at(j).at(moves.at(i)-1) != 0) {
				N = board.at(j).at(moves.at(i)-1);
				board.at(j).at(moves.at(i)-1) = 0;
				break;
			}
		}
		if (N != 0) {
			pocket.emplace_back(N);
			if (pocket.size() > 1) {
				if (N == pocket.at(pocket.size()-2)) {
					pocket.pop_back();
					pocket.pop_back();
					answer += 2;
				}
			}
		}
	}

    return answer;
}

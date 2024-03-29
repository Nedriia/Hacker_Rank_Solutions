#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


bool isObstacle(const int &r, const int &c, vector<vector<int>>&tmp_obstac)
{
	auto end = tmp_obstac.end();

	for (auto row = tmp_obstac.begin(); row != end; ++row) {
		for (auto col = std::next(row->begin(), 1); col != row->end(); ++col) {
			if (r == (*(*row).begin()) && c == *col)
				return true;
		}
	}
	return false;
}

// Complete the queensAttack function below.
int queensAttack(const int &n, const int &k, const int &r_q, const int &c_q, vector<vector<int>>&obstacles) {
	int solution = 0;

	int tmp_r = r_q, tmp_c = c_q;
	//left
	while (tmp_c > 0) {
		if ((tmp_r != r_q) || (tmp_c != c_q)) {
			if (isObstacle(tmp_r, tmp_c, obstacles))
				break;
			else
				solution++;
		}
		tmp_c--;
	}

	//right
	tmp_r = r_q, tmp_c = c_q;
	while (tmp_c <= n) {
		if ((tmp_r != r_q) || (tmp_c != c_q)) {
			if (isObstacle(tmp_r, tmp_c, obstacles))
				break;
			else
				solution++;
		}
		tmp_c++;
	}

	//diag left down
	tmp_r = r_q, tmp_c = c_q;
	while (tmp_c > 0 && tmp_r > 0) {
		if ((tmp_r != r_q) || (tmp_c != c_q)) {
			if (isObstacle(tmp_r, tmp_c, obstacles))
				break;
			else
				solution++;
		}
		tmp_c--;
		tmp_r--;
	}

	//diag right down
	tmp_r = r_q, tmp_c = c_q;
	while (tmp_c <= n && tmp_r > 0) {
		if ((tmp_r != r_q) || (tmp_c != c_q)) {
			if (isObstacle(tmp_r, tmp_c, obstacles))
				break;
			else
				solution++;
		}
		tmp_c++;
		tmp_r--;
	}

	//down
	tmp_r = r_q, tmp_c = c_q;
	while (tmp_r > 0) {
		if ((tmp_r != r_q) || (tmp_c != c_q)) {
			if (isObstacle(tmp_r, tmp_c, obstacles))
				break;
			else
				solution++;
		}
		tmp_r--;
	}

	//up
	tmp_r = r_q, tmp_c = c_q;
	while (tmp_r <= n) {
		if ((tmp_r != r_q) || (tmp_c != c_q)) {
			if (isObstacle(tmp_r, tmp_c, obstacles))
				break;
			else
				solution++;
		}
		tmp_r++;
	}

	//diag left up
	tmp_r = r_q, tmp_c = c_q;
	while (tmp_c > 0 && tmp_r <= n) {
		if ((tmp_r != r_q) || (tmp_c != c_q)) {
			if (isObstacle(tmp_r, tmp_c, obstacles))
				break;
			else
				solution++;
		}
		tmp_c--;
		tmp_r++;
	}

	//diag right up
	tmp_r = r_q, tmp_c = c_q;
	while (tmp_c <= n && tmp_r <= n) {
		if ((tmp_r != r_q) || (tmp_c != c_q)) {
			if (isObstacle(tmp_r, tmp_c, obstacles))
				break;
			else
				solution++;
		}
		tmp_c++;
		tmp_r++;
	}
	return solution;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string nk_temp;
	getline(cin, nk_temp);

	vector<string> nk = split_string(nk_temp);

	int n = stoi(nk[0]);

	int k = stoi(nk[1]);

	string r_qC_q_temp;
	getline(cin, r_qC_q_temp);

	vector<string> r_qC_q = split_string(r_qC_q_temp);

	int r_q = stoi(r_qC_q[0]);

	int c_q = stoi(r_qC_q[1]);

	vector<vector<int>> obstacles(k);
	for (int i = 0; i < k; i++) {
		obstacles[i].resize(2);

		for (int j = 0; j < 2; j++) {
			cin >> obstacles[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	int result = queensAttack(n, k, r_q, c_q, obstacles);

	fout << result << "\n";

	fout.close();

	return 0;
}

vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
		return x == y and x == ' ';
	});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}

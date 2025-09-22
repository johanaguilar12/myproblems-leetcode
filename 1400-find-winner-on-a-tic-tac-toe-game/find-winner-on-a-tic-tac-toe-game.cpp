class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {

        vector<vector<char>> grid(3, vector<char>(3, ' '));
        bool A = true;
        for (auto x : moves) {
            grid[x[0]][x[1]] = A ? 'X' : 'O';
            A = !A;
        }

        // columnas
        for (int i = 0; i < 3; i++) {
            bool win = true;
            char prev = grid[0][i];
            for (int j = 1; j < 3; j++) {
                if (prev == ' ' || grid[j][i] != prev) {
                    win = false;
                    break;
                }
            }
            if (win) return (prev == 'X') ? "A" : "B";
        }

        // filas
        for (int i = 0; i < 3; i++) {
            bool win = true;
            char prev = grid[i][0];
            for (int j = 1; j < 3; j++) {
                if (prev == ' ' || grid[i][j] != prev) {
                    win = false;
                    break;
                }
            }
            if (win) return (prev == 'X') ? "A" : "B";
        }

        // diagonales
        if ((grid[0][0] != ' ' && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) ||
            (grid[0][2] != ' ' && grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0])) {
            return (grid[1][1] == 'X') ? "A" : "B";
        }

        if (moves.size() == 9) return "Draw";
        return "Pending";
    }
};

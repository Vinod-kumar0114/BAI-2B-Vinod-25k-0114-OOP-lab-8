#include <iostream>
using namespace std;

class BallsFaced;

class Runs {
private:
    int score;

public:
    Runs(int r) {
        score = r;
    }
    friend void calculateStrikeRate(Runs r, BallsFaced b);
};

class BallsFaced {
private:
    int balls;

public:
    BallsFaced(int b) {
        balls = b;
    }
    friend void calculateStrikeRate(Runs r, BallsFaced b);
};

void calculateStrikeRate(Runs r, BallsFaced b) {
    if (b.balls != 0) {
        double strikeRate = (static_cast<double>(r.score) / b.balls) * 100;
        cout << "Batsman Strike Rate: " << strikeRate << endl;
    } else {
        cout << "Balls faced cannot be zero." << endl;
    }
}

int main() {
    Runs matchRuns(85);
    BallsFaced matchBalls(60);

    calculateStrikeRate(matchRuns, matchBalls);

    return 0;
}
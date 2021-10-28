#include<bits/stdc++.h>
using namespace std;

// calculate area of triangle with pair of coordinates A, B and C
long long int calc_area(pair<int, int> &A, pair<int, int> &B, pair<int, int> &C) {
    int x1 = A.first, y1 = A.second;
    int x2 = B.first, y2 = B.second;
    int x3 = C.first, y3 = C.second;

    long long int res = 1LL * x1 * (y2 - y3) + 1LL * x2 * (y3 - y1) + 1LL * x3 * (y1 - y2);
    res = abs(res);
    res /= 2;

    return res;
}

// does the found solution have given manhattan sidelengths?
bool isvalid(pair<int, int>&A, pair<int, int>&B, pair<int, int>&C, int a, int b, int c) {
	return ((abs(A.first - B.first) + abs(A.second - B.second) == a) && (abs(B.first - C.first) + abs(B.second - C.second) == b) && (abs(C.first - A.first) + abs(C.second - A.second) == c));
}

// solve
void solve(int p, int q, int r) {
    int s = (p + q + r);

    pair<int, int> A = {0, 0}, B = {0, 0}, C = {0, 0};
    long long int area = 0;

    pair<int, int> tA = {0, 0}, tB = {0, 0}, tC = {0, 0};
    long long int tarea = 0;

	vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    int p = v[0], q = v[1], r = v[2];
    if ((s % 2 == 0) && ((p + q) >= r)) {
        int x, y, d;
        printf("YES\n");

        s /= 2;

        // Case 2
        x = s - c;
        y = s - b;
        int rem = (b + c - s) / 2;

        A = {x, 0};
        B = {0, y};
        C = {x + rem, y + rem};

        area = calc_area(A, B, C);

        // Case 3
        x = 0;
        if (c > a) x = a;

        y = a - x;
        d = x - y;

        tA = {x, 0};
        tB = {0, y};
        tC = {s - c, (b + c - d) / 2};

        tarea = calc_area(tA, tB, tC);

        // update
        if (tarea > area) {
            area = tarea;

            A.first = tA.first; A.second = tA.second;
            B.first = tB.first; B.second = tB.second;
            C.first = tC.first; C.second = tC.second;
        }
		else if (tarea == area) {
			if ((A == B) or (B == C) or (C == A)) {
				A.first = tA.first; A.second = tA.second;
				B.first = tB.first; B.second = tB.second;
				C.first = tC.first; C.second = tC.second;
			}
		}

        // Case 4
        x = 0;
        if (a > b) x = a;

        y = a - x;
        d = x - y;

        tA = {x, 0};
        tB = {0, y};
        tC = {(b + c + d) / 2, s - b};

        tarea = calc_area(tA, tB, tC);

        // update
        if (tarea > area) {
            area = tarea;

            A.first = tA.first; A.second = tA.second;
            B.first = tB.first; B.second = tB.second;
            C.first = tC.first; C.second = tC.second;
        }
		else if (tarea == area) {
			if ((A == B) or (B == C) or (C == A)) {
				A.first = tA.first; A.second = tA.second;
				B.first = tB.first; B.second = tB.second;
				C.first = tC.first; C.second = tC.second;
			}
		}

		assert(isvalid(A,B,C,a,b,c));

        printf("%d %d\n", 1 + A.first, 1 + A.second);
        printf("%d %d\n", 1 + B.first, 1 + B.second);
        printf("%d %d\n", 1 + C.first, 1 + C.second);

		return;
    }

    printf("NO\n");
    return;
}

int main() {
    int tc; scanf("%d", &tc);
    while (tc--) {
        int a, b, c; scanf("%d%d%d", &a, &b, &c);
        solve(a, b, c);
    }

    return 0;
}

/*
    Problem Statement:
    Given 3 lengths a, b and c. Construct a triangle with maximum possible area such that
    the Manhattan distances between their vertices are a, b and c respectively.
*/
#include <bits/stdc++.h>

using namespace std;

const int maxX = 10000;

// calc areaoftriangle with 3 pts
double areaofTriangle(pair < double, double > &pt1, pair < double, double > &pt2, pair < double, double > &pt3) {
  return (
    (pt1.first * (pt2.second - pt3.second)) +
    (pt2.first * (pt3.second - pt1.second)) +
    (pt3.first * (pt1.second - pt2.second))
  ) / 2;
}

// check c pt is exist between a and b pt where a,b,c are collinear
bool isPointonLineSegment(pair < double, double > &pt1, pair < double, double > &pt2, pair < double, double > &pt) {
  return (
    pt.first >= min(pt1.first, pt2.first) && pt.first <= max(pt1.first, pt2.first) &&
    pt.second >= min(pt1.second, pt2.second) && pt.second <= max(pt1.second, pt2.second)
  ) ? true : false;
}

// check for special cases
bool pointsonSameSideofInfinityLine(pair < double, double > &pt1, pair < double, double > &pt2, double &yref) {
  return (
    (yref < pt1.second && yref < pt2.second) || (yref > pt1.second && yref > pt2.second)
  ) ? true : false;
}

// Ax + By = C
/*
(y2 - y1) / (x2 - x1) = (y - y1) / (x - x1)
y - y1 = (y2 - y1) / (x2 - x1) * (x - x1)
y (x2 - x1) - y1 (x2 - x1) = x(y2 - y1) - x1 (y2 - y1)
(y2 - y1)x + (x1 - x2)y = x1 (y2 - y1) + y1 (x1 - x2)
*/
tuple < double, double, double > lineEquation(pair < double, double > &pt1, pair < double, double > &pt2) {
  tuple < double, double, double > ln;
  get<0>(ln) = pt2.second - pt1.second;
  get<1>(ln) = pt1.first - pt2.first;
  get<2>(ln) = (pt1.first * get<0>(ln)) + (pt1.second * get<1>(ln));
  return ln;
}

/*
A1x + B1y = C1;
A2x + B2y = C2;
det = A1 * B2 - A2 * B1
*/
tuple < double, pair < double, double > > intersectionPoint(tuple < double, double, double > &ln1, tuple < double, double, double > &ln2) {
  tuple < double, pair < double, double > > intpt;

  get<0>(intpt) = (get<0>(ln1) * get<1>(ln2)) - (get<0>(ln2) * get<1>(ln1));
  if (get<0>(intpt) == 0) {
    return intpt;
  }

  get<1>(intpt).first = (
    (get<2>(ln1) * get<1>(ln2)) - (get<2>(ln2) * get<1>(ln1))
  ) / get<0>(intpt);
  get<1>(intpt).second =  (
    (get<2>(ln2) * get<0>(ln1)) - (get<2>(ln1) * get<0>(ln2))
  ) / get<0>(intpt);
  return intpt;
}

string ans(vector < pair < double, double > > &pts, pair < double, double > &pt) {
  int ptsSize = pts.size();
  set < pair < double, double > > intpts;

  pair < double, double > ptInf = pt;
  ptInf.first = maxX;
  tuple < double, double, double > ln2 = lineEquation(pt, ptInf);

  for (int i = 0; i < ptsSize; i++) {
    pair < double, double > pt1 = pts[i], pt2 = pts[(i + 1) % ptsSize];
    if (areaofTriangle(pt1, pt2, pt) == 0 && isPointonLineSegment(pt1, pt2, pt)) {
      return "on";
    } else {
      tuple < double, double, double > ln1 = lineEquation(pt1, pt2);
      tuple < double, pair < double, double > > intpt = intersectionPoint(ln1, ln2);

      if (get<0>(intpt) != 0 && isPointonLineSegment(pt1, pt2, get<1>(intpt)) && isPointonLineSegment(pt, ptInf, get<1>(intpt))) {
        if (get<1>(intpt) == pt1) {
          int position = (i - 1 + ptsSize) % ptsSize;
          while (pts[position].second == pt.second) {
            position = (position - 1 + ptsSize) % ptsSize;
          }
          if (!pointsonSameSideofInfinityLine(pts[position], pt2, pt.second)) {
            intpts.insert(pts[(position + 1) % ptsSize]);
          }
        } else if (get<1>(intpt) == pt2) {
          int position = (i + 2) % ptsSize;
          while (pts[position].second == pt.second) {
            position = (position + 1) % ptsSize;
          }
          if (!pointsonSameSideofInfinityLine(pt1, pts[position], pt.second)) {
            intpts.insert(pts[(i + 1) % ptsSize]);
          }
        } else {
          intpts.insert(get<1>(intpt));
        }
      }
    }
  }
  return (intpts.size() % 2 == 0 ? "out" : "in");
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  while (cin >> n && n != 0) {
    vector < pair < double, double > > pts;
    while (n--) {
      pair < double, double > pt;
      cin >> pt.first;
      cin >> pt.second;
      pts.push_back(pt);
    }

    int m;
    cin >> m;
    while (m--) {
      pair < double, double > pt;
      cin >> pt.first;
      cin >> pt.second;
      cout << ans(pts, pt) << "\n";
    }
  }
  return 0;
}

// 이 프로그램은 2D 공간에서 x와 y 좌표를 가지는 점을 나타내는 Point 구조체를 정의합니다.
// Point 구조체는 주어진 오프셋만큼 점을 이동시키고, 다른 점의 좌표를 더하며, 현재 위치를 표시하는 메서드를 제공합니다.

#include <iostream>
using namespace std;

struct Point {
    int xpos; // 점의 x 좌표
    int ypos; // 점의 y 좌표

    // 주어진 x와 y 오프셋만큼 점을 이동시킵니다.
    // 매개변수:
    //   x - x 좌표에 더할 오프셋
    //   y - y 좌표에 더할 오프셋
    void MovePos(int x, int y) {
        xpos += x;
        ypos += y;
    }

    // 다른 점의 좌표를 이 점에 더합니다.
    // 매개변수:
    //   pos - 좌표를 더할 점
    void AddPoint(const Point &pos) {
        xpos += pos.xpos;
        ypos += pos.ypos;
    }

    // 점의 현재 위치를 [xpos, ypos] 형식으로 표시합니다.
    void ShowPosition() {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};

int main(void) {
    Point pos1 = {12, 4}; // 좌표 (12, 4)로 pos1 초기화
    Point pos2 = {20, 30}; // 좌표 (20, 30)로 pos2 초기화

    pos1.MovePos(-7, 10); // pos1을 (-7, 10)만큼 이동
    pos1.ShowPosition(); // pos1의 현재 위치 표시

    pos1.AddPoint(pos2); // pos1에 pos2의 좌표를 더함
    pos1.ShowPosition(); // pos1의 현재 위치 표시

    return 0;
}
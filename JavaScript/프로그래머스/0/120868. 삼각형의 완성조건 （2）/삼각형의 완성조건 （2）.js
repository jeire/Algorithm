function solution(sides) {
    var shortSide = sides[0] > sides[1] ? sides[1] : sides[0];
    return 2 * shortSide - 1;
}
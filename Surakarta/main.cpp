// #include <chrono>
// #include <iostream>
// #include <thread>
// #include "surakarta_agent/surakarta_agent_mine.h"
// #include "surakarta_agent/surakarta_agent_random.h"
#include "surakarta_board.h"
// #include "surakarta_common.h"
// #include "surakarta_game.h"
#include <QApplication>
// #define ANSI_CLEAR_SCREEN "\033[2J"
// #define ANSI_MOVE_TO_START "\033[H"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SurakartaBoard chessBoard;
    chessBoard.show();

    return a.exec();
}

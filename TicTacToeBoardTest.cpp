/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/
TEST( /* Test Class: */ TicTacToeBoardTest,
      /* Test Case name: */ isXTurns)
{
	TicTacToeBoard obj;
	Piece myPiece =  obj.toggleTurn(); 
	ASSERT_EQ(myPiece, X);
}
TEST( /* Test Class: */ TicTacToeBoardTest,
      /* Test Case name: */ isOTurns)
{
	TicTacToeBoard obj;
	Piece myPiece =  obj.toggleTurn(); 
	ASSERT_EQ(myPiece, O);
}
TEST( /* Test Class: */ TicTacToeBoardTest,
      /* Test Case name: */ noOnesTurns)
{
	TicTacToeBoard obj;
	Piece myPiece =  obj.toggleTurn(); 
	ASSERT_EQ(myPiece, Invalid);
}
TEST( /* Test Class: */ TicTacToeBoardTest,
      /* Test Case name: */ xWins)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(0,1);
	obj.placePiece(0,2);
	Piece myPiece =  obj.getWinner(); 
	ASSERT_EQ(myPiece, X);
}
TEST( /* Test Class: */ TicTacToeBoardTest,
      /* Test Case name: */ oWins)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.placePiece(0,0);
	obj.placePiece(0,1);
	obj.placePiece(0,2);
	Piece myPiece =  obj.getWinner(); 
	ASSERT_EQ(myPiece, X);
}


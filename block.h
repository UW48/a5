#ifndef _BLOCK_H
#define _BLOCK_H

struct Coordinate{
	unsigned int row;
	unsigned int col;
	char sym; // '-' if not occupied
	int level;
}

class Block{
	std::vector<Coordinate> coord; //size of coord is side*side
	int side; //side length of block
	public:
	void left();
	void right();
	void down();
	void counterClockwise();
	void Clockwise();
	vector<coordinate> getCoord();
	virtual char getSym() = 0;
	
}

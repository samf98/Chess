Chess.exe:	main.o position.o piece.o king.o queen.o rook.o bishop.o knight.o pawn.o
	g++ main.o position.o piece.o king.o queen.o rook.o bishop.o knight.o pawn.o -o Chess

main.o:	main.cpp position.hpp piece.hpp king.hpp queen.hpp rook.hpp bishop.hpp knight.hpp pawn.hpp
	g++ -c main.cpp

position.o:	position.cpp position.hpp
	g++ -c position.cpp

piece.o:	piece.cpp piece.hpp position.hpp
	g++ -c piece.cpp

king.o:	king.cpp king.hpp piece.hpp position.hpp
	g++ -c king.cpp

queen.o:	queen.cpp queen.hpp piece.hpp position.hpp rook.hpp bishop.hpp
	g++ -c queen.cpp

rook.o:	rook.cpp rook.hpp piece.hpp position.hpp
	g++ -c rook.cpp

bishop.o:	bishop.cpp bishop.hpp piece.hpp position.hpp
	g++ -c bishop.cpp

knight.o:	knight.cpp knight.hpp piece.hpp position.hpp
	g++ -c knight.cpp

pawn.o:	pawn.cpp pawn.hpp piece.hpp position.hpp
	g++ -c pawn.cpp

clean:
	rm *.o Chess

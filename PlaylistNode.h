#include <iostream>
using namespace std;

class PlaylistNode{
   // step 1
   private:
      string uniqueID;
      string songName;
      string artistName;
      int songLength;
      PlaylistNode* nextNodePtr;
      
   public:
      PlaylistNode();
      PlaylistNode(string idName, string sName, string artName, int sLength, PlaylistNode* nextPtr = nullptr); 
      string GetID();
      string GetSongName();
      string GetArtistName();
      int GetSongLength();
      PlaylistNode* GetNext();
      void InsertAfter(PlaylistNode* nodePtr);
      void SetNext(PlaylistNode* nodePtr);
      void PrintPlaylistNode();
   };

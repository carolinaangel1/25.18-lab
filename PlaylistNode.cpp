#include "PlaylistNode.h"
// step 1
// default contructor 
 PlaylistNode::PlaylistNode(){
    uniqueID = "none";
    songName = "none";
    artistName = "none";
    songLength = 0;
    nextNodePtr = nullptr;
 }
 // parameterized constructor 
 PlaylistNode::PlaylistNode(string idName, string sName, string artName, int sLength, PlaylistNode* nextPtr){
    uniqueID = idName;
    songName = sName;
    artistName = artName;
    songLength = sLength;
    nextNodePtr = nextPtr;
 }
 string PlaylistNode::GetID(){
    return uniqueID;

 }

 string PlaylistNode::GetSongName(){
    return songName;

 }

 string PlaylistNode::GetArtistName(){
    return artistName;

 }

 int PlaylistNode::GetSongLength(){
    return songLength;

 }

 PlaylistNode* PlaylistNode::GetNext(){
    return nextNodePtr;

 }

 void PlaylistNode::InsertAfter(PlaylistNode* nodePtr){
    PlaylistNode* temp = this->nextNodePtr;
    this->nextNodePtr = nodePtr;
    nodePtr->nextNodePtr = temp;

 }

 void PlaylistNode::SetNext(PlaylistNode* nodePtr){
    this->nextNodePtr = nodePtr;

 }

 void PlaylistNode::PrintPlaylistNode(){
    cout << "Unique ID: " << uniqueID << endl;
    cout << "Song Name: " << songName << endl;
    cout << "Artist Name: " << artistName << endl;
    cout << "Song Length (in seconds): " << songLength << endl;

 }



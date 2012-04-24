/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef NoteStore_TYPES_H
#define NoteStore_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>

#include "UserStore_types.h"
#include "Types_types.h"
#include "Errors_types.h"
#include "Limits_types.h"


namespace evernote { namespace edam {

typedef struct _SyncState__isset {
  _SyncState__isset() : uploaded(false) {}
  bool uploaded;
} _SyncState__isset;

class SyncState {
 public:

  static const char* ascii_fingerprint; // = "2D37F7155AE775C329078C137087C461";
  static const uint8_t binary_fingerprint[16]; // = {0x2D,0x37,0xF7,0x15,0x5A,0xE7,0x75,0xC3,0x29,0x07,0x8C,0x13,0x70,0x87,0xC4,0x61};

  SyncState() : currentTime(0), fullSyncBefore(0), updateCount(0), uploaded(0) {
  }

  virtual ~SyncState() throw() {}

  evernote::edam::Timestamp currentTime;
  evernote::edam::Timestamp fullSyncBefore;
  int32_t updateCount;
  int64_t uploaded;

  _SyncState__isset __isset;

  bool operator == (const SyncState & rhs) const
  {
    if (!(currentTime == rhs.currentTime))
      return false;
    if (!(fullSyncBefore == rhs.fullSyncBefore))
      return false;
    if (!(updateCount == rhs.updateCount))
      return false;
    if (__isset.uploaded != rhs.__isset.uploaded)
      return false;
    else if (__isset.uploaded && !(uploaded == rhs.uploaded))
      return false;
    return true;
  }
  bool operator != (const SyncState &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SyncState & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SyncChunk__isset {
  _SyncChunk__isset() : chunkHighUSN(false), notes(false), notebooks(false), tags(false), searches(false), resources(false), expungedNotes(false), expungedNotebooks(false), expungedTags(false), expungedSearches(false), linkedNotebooks(false), expungedLinkedNotebooks(false) {}
  bool chunkHighUSN;
  bool notes;
  bool notebooks;
  bool tags;
  bool searches;
  bool resources;
  bool expungedNotes;
  bool expungedNotebooks;
  bool expungedTags;
  bool expungedSearches;
  bool linkedNotebooks;
  bool expungedLinkedNotebooks;
} _SyncChunk__isset;

class SyncChunk {
 public:

  static const char* ascii_fingerprint; // = "D59CD55325EEC209B3EDAD529EF88313";
  static const uint8_t binary_fingerprint[16]; // = {0xD5,0x9C,0xD5,0x53,0x25,0xEE,0xC2,0x09,0xB3,0xED,0xAD,0x52,0x9E,0xF8,0x83,0x13};

  SyncChunk() : currentTime(0), chunkHighUSN(0), updateCount(0) {
  }

  virtual ~SyncChunk() throw() {}

  evernote::edam::Timestamp currentTime;
  int32_t chunkHighUSN;
  int32_t updateCount;
  std::vector<evernote::edam::Note>  notes;
  std::vector<evernote::edam::Notebook>  notebooks;
  std::vector<evernote::edam::Tag>  tags;
  std::vector<evernote::edam::SavedSearch>  searches;
  std::vector<evernote::edam::Resource>  resources;
  std::vector<evernote::edam::Guid>  expungedNotes;
  std::vector<evernote::edam::Guid>  expungedNotebooks;
  std::vector<evernote::edam::Guid>  expungedTags;
  std::vector<evernote::edam::Guid>  expungedSearches;
  std::vector<evernote::edam::LinkedNotebook>  linkedNotebooks;
  std::vector<evernote::edam::Guid>  expungedLinkedNotebooks;

  _SyncChunk__isset __isset;

  bool operator == (const SyncChunk & rhs) const
  {
    if (!(currentTime == rhs.currentTime))
      return false;
    if (__isset.chunkHighUSN != rhs.__isset.chunkHighUSN)
      return false;
    else if (__isset.chunkHighUSN && !(chunkHighUSN == rhs.chunkHighUSN))
      return false;
    if (!(updateCount == rhs.updateCount))
      return false;
    if (__isset.notes != rhs.__isset.notes)
      return false;
    else if (__isset.notes && !(notes == rhs.notes))
      return false;
    if (__isset.notebooks != rhs.__isset.notebooks)
      return false;
    else if (__isset.notebooks && !(notebooks == rhs.notebooks))
      return false;
    if (__isset.tags != rhs.__isset.tags)
      return false;
    else if (__isset.tags && !(tags == rhs.tags))
      return false;
    if (__isset.searches != rhs.__isset.searches)
      return false;
    else if (__isset.searches && !(searches == rhs.searches))
      return false;
    if (__isset.resources != rhs.__isset.resources)
      return false;
    else if (__isset.resources && !(resources == rhs.resources))
      return false;
    if (__isset.expungedNotes != rhs.__isset.expungedNotes)
      return false;
    else if (__isset.expungedNotes && !(expungedNotes == rhs.expungedNotes))
      return false;
    if (__isset.expungedNotebooks != rhs.__isset.expungedNotebooks)
      return false;
    else if (__isset.expungedNotebooks && !(expungedNotebooks == rhs.expungedNotebooks))
      return false;
    if (__isset.expungedTags != rhs.__isset.expungedTags)
      return false;
    else if (__isset.expungedTags && !(expungedTags == rhs.expungedTags))
      return false;
    if (__isset.expungedSearches != rhs.__isset.expungedSearches)
      return false;
    else if (__isset.expungedSearches && !(expungedSearches == rhs.expungedSearches))
      return false;
    if (__isset.linkedNotebooks != rhs.__isset.linkedNotebooks)
      return false;
    else if (__isset.linkedNotebooks && !(linkedNotebooks == rhs.linkedNotebooks))
      return false;
    if (__isset.expungedLinkedNotebooks != rhs.__isset.expungedLinkedNotebooks)
      return false;
    else if (__isset.expungedLinkedNotebooks && !(expungedLinkedNotebooks == rhs.expungedLinkedNotebooks))
      return false;
    return true;
  }
  bool operator != (const SyncChunk &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SyncChunk & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SyncChunkFilter__isset {
  _SyncChunkFilter__isset() : includeNotes(false), includeNoteResources(false), includeNoteAttributes(false), includeNotebooks(false), includeTags(false), includeSearches(false), includeResources(false), includeLinkedNotebooks(false), includeExpunged(false), includeNoteApplicationDataFullMap(false), includeResourceApplicationDataFullMap(false), includeNoteResourceApplicationDataFullMap(false), requireNoteContentClass(false) {}
  bool includeNotes;
  bool includeNoteResources;
  bool includeNoteAttributes;
  bool includeNotebooks;
  bool includeTags;
  bool includeSearches;
  bool includeResources;
  bool includeLinkedNotebooks;
  bool includeExpunged;
  bool includeNoteApplicationDataFullMap;
  bool includeResourceApplicationDataFullMap;
  bool includeNoteResourceApplicationDataFullMap;
  bool requireNoteContentClass;
} _SyncChunkFilter__isset;

class SyncChunkFilter {
 public:

  static const char* ascii_fingerprint; // = "39A6499DBC9F34F8EB10F87E45BE5390";
  static const uint8_t binary_fingerprint[16]; // = {0x39,0xA6,0x49,0x9D,0xBC,0x9F,0x34,0xF8,0xEB,0x10,0xF8,0x7E,0x45,0xBE,0x53,0x90};

  SyncChunkFilter() : includeNotes(0), includeNoteResources(0), includeNoteAttributes(0), includeNotebooks(0), includeTags(0), includeSearches(0), includeResources(0), includeLinkedNotebooks(0), includeExpunged(0), includeNoteApplicationDataFullMap(0), includeResourceApplicationDataFullMap(0), includeNoteResourceApplicationDataFullMap(0), requireNoteContentClass("") {
  }

  virtual ~SyncChunkFilter() throw() {}

  bool includeNotes;
  bool includeNoteResources;
  bool includeNoteAttributes;
  bool includeNotebooks;
  bool includeTags;
  bool includeSearches;
  bool includeResources;
  bool includeLinkedNotebooks;
  bool includeExpunged;
  bool includeNoteApplicationDataFullMap;
  bool includeResourceApplicationDataFullMap;
  bool includeNoteResourceApplicationDataFullMap;
  std::string requireNoteContentClass;

  _SyncChunkFilter__isset __isset;

  bool operator == (const SyncChunkFilter & rhs) const
  {
    if (__isset.includeNotes != rhs.__isset.includeNotes)
      return false;
    else if (__isset.includeNotes && !(includeNotes == rhs.includeNotes))
      return false;
    if (__isset.includeNoteResources != rhs.__isset.includeNoteResources)
      return false;
    else if (__isset.includeNoteResources && !(includeNoteResources == rhs.includeNoteResources))
      return false;
    if (__isset.includeNoteAttributes != rhs.__isset.includeNoteAttributes)
      return false;
    else if (__isset.includeNoteAttributes && !(includeNoteAttributes == rhs.includeNoteAttributes))
      return false;
    if (__isset.includeNotebooks != rhs.__isset.includeNotebooks)
      return false;
    else if (__isset.includeNotebooks && !(includeNotebooks == rhs.includeNotebooks))
      return false;
    if (__isset.includeTags != rhs.__isset.includeTags)
      return false;
    else if (__isset.includeTags && !(includeTags == rhs.includeTags))
      return false;
    if (__isset.includeSearches != rhs.__isset.includeSearches)
      return false;
    else if (__isset.includeSearches && !(includeSearches == rhs.includeSearches))
      return false;
    if (__isset.includeResources != rhs.__isset.includeResources)
      return false;
    else if (__isset.includeResources && !(includeResources == rhs.includeResources))
      return false;
    if (__isset.includeLinkedNotebooks != rhs.__isset.includeLinkedNotebooks)
      return false;
    else if (__isset.includeLinkedNotebooks && !(includeLinkedNotebooks == rhs.includeLinkedNotebooks))
      return false;
    if (__isset.includeExpunged != rhs.__isset.includeExpunged)
      return false;
    else if (__isset.includeExpunged && !(includeExpunged == rhs.includeExpunged))
      return false;
    if (__isset.includeNoteApplicationDataFullMap != rhs.__isset.includeNoteApplicationDataFullMap)
      return false;
    else if (__isset.includeNoteApplicationDataFullMap && !(includeNoteApplicationDataFullMap == rhs.includeNoteApplicationDataFullMap))
      return false;
    if (__isset.includeResourceApplicationDataFullMap != rhs.__isset.includeResourceApplicationDataFullMap)
      return false;
    else if (__isset.includeResourceApplicationDataFullMap && !(includeResourceApplicationDataFullMap == rhs.includeResourceApplicationDataFullMap))
      return false;
    if (__isset.includeNoteResourceApplicationDataFullMap != rhs.__isset.includeNoteResourceApplicationDataFullMap)
      return false;
    else if (__isset.includeNoteResourceApplicationDataFullMap && !(includeNoteResourceApplicationDataFullMap == rhs.includeNoteResourceApplicationDataFullMap))
      return false;
    if (__isset.requireNoteContentClass != rhs.__isset.requireNoteContentClass)
      return false;
    else if (__isset.requireNoteContentClass && !(requireNoteContentClass == rhs.requireNoteContentClass))
      return false;
    return true;
  }
  bool operator != (const SyncChunkFilter &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SyncChunkFilter & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NoteFilter__isset {
  _NoteFilter__isset() : order(false), ascending(false), words(false), notebookGuid(false), tagGuids(false), timeZone(false), inactive(false) {}
  bool order;
  bool ascending;
  bool words;
  bool notebookGuid;
  bool tagGuids;
  bool timeZone;
  bool inactive;
} _NoteFilter__isset;

class NoteFilter {
 public:

  static const char* ascii_fingerprint; // = "E3FEA280E924E0A51D5D872FA8A51D7F";
  static const uint8_t binary_fingerprint[16]; // = {0xE3,0xFE,0xA2,0x80,0xE9,0x24,0xE0,0xA5,0x1D,0x5D,0x87,0x2F,0xA8,0xA5,0x1D,0x7F};

  NoteFilter() : order(0), ascending(0), words(""), notebookGuid(""), timeZone(""), inactive(0) {
  }

  virtual ~NoteFilter() throw() {}

  int32_t order;
  bool ascending;
  std::string words;
  evernote::edam::Guid notebookGuid;
  std::vector<evernote::edam::Guid>  tagGuids;
  std::string timeZone;
  bool inactive;

  _NoteFilter__isset __isset;

  bool operator == (const NoteFilter & rhs) const
  {
    if (__isset.order != rhs.__isset.order)
      return false;
    else if (__isset.order && !(order == rhs.order))
      return false;
    if (__isset.ascending != rhs.__isset.ascending)
      return false;
    else if (__isset.ascending && !(ascending == rhs.ascending))
      return false;
    if (__isset.words != rhs.__isset.words)
      return false;
    else if (__isset.words && !(words == rhs.words))
      return false;
    if (__isset.notebookGuid != rhs.__isset.notebookGuid)
      return false;
    else if (__isset.notebookGuid && !(notebookGuid == rhs.notebookGuid))
      return false;
    if (__isset.tagGuids != rhs.__isset.tagGuids)
      return false;
    else if (__isset.tagGuids && !(tagGuids == rhs.tagGuids))
      return false;
    if (__isset.timeZone != rhs.__isset.timeZone)
      return false;
    else if (__isset.timeZone && !(timeZone == rhs.timeZone))
      return false;
    if (__isset.inactive != rhs.__isset.inactive)
      return false;
    else if (__isset.inactive && !(inactive == rhs.inactive))
      return false;
    return true;
  }
  bool operator != (const NoteFilter &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteFilter & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NoteList__isset {
  _NoteList__isset() : stoppedWords(false), searchedWords(false), updateCount(false) {}
  bool stoppedWords;
  bool searchedWords;
  bool updateCount;
} _NoteList__isset;

class NoteList {
 public:

  static const char* ascii_fingerprint; // = "C4253E73F029D45828E9B8E3AFD6A5D4";
  static const uint8_t binary_fingerprint[16]; // = {0xC4,0x25,0x3E,0x73,0xF0,0x29,0xD4,0x58,0x28,0xE9,0xB8,0xE3,0xAF,0xD6,0xA5,0xD4};

  NoteList() : startIndex(0), totalNotes(0), updateCount(0) {
  }

  virtual ~NoteList() throw() {}

  int32_t startIndex;
  int32_t totalNotes;
  std::vector<evernote::edam::Note>  notes;
  std::vector<std::string>  stoppedWords;
  std::vector<std::string>  searchedWords;
  int32_t updateCount;

  _NoteList__isset __isset;

  bool operator == (const NoteList & rhs) const
  {
    if (!(startIndex == rhs.startIndex))
      return false;
    if (!(totalNotes == rhs.totalNotes))
      return false;
    if (!(notes == rhs.notes))
      return false;
    if (__isset.stoppedWords != rhs.__isset.stoppedWords)
      return false;
    else if (__isset.stoppedWords && !(stoppedWords == rhs.stoppedWords))
      return false;
    if (__isset.searchedWords != rhs.__isset.searchedWords)
      return false;
    else if (__isset.searchedWords && !(searchedWords == rhs.searchedWords))
      return false;
    if (__isset.updateCount != rhs.__isset.updateCount)
      return false;
    else if (__isset.updateCount && !(updateCount == rhs.updateCount))
      return false;
    return true;
  }
  bool operator != (const NoteList &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteList & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NoteMetadata__isset {
  _NoteMetadata__isset() : title(false), contentLength(false), created(false), updated(false), updateSequenceNum(false), notebookGuid(false), tagGuids(false), attributes(false), largestResourceMime(false), largestResourceSize(false) {}
  bool title;
  bool contentLength;
  bool created;
  bool updated;
  bool updateSequenceNum;
  bool notebookGuid;
  bool tagGuids;
  bool attributes;
  bool largestResourceMime;
  bool largestResourceSize;
} _NoteMetadata__isset;

class NoteMetadata {
 public:

  static const char* ascii_fingerprint; // = "2159F77A08C4F7332F71EF5A1BD5AE2B";
  static const uint8_t binary_fingerprint[16]; // = {0x21,0x59,0xF7,0x7A,0x08,0xC4,0xF7,0x33,0x2F,0x71,0xEF,0x5A,0x1B,0xD5,0xAE,0x2B};

  NoteMetadata() : guid(""), title(""), contentLength(0), created(0), updated(0), updateSequenceNum(0), notebookGuid(""), largestResourceMime(""), largestResourceSize(0) {
  }

  virtual ~NoteMetadata() throw() {}

  evernote::edam::Guid guid;
  std::string title;
  int32_t contentLength;
  evernote::edam::Timestamp created;
  evernote::edam::Timestamp updated;
  int32_t updateSequenceNum;
  std::string notebookGuid;
  std::vector<evernote::edam::Guid>  tagGuids;
  evernote::edam::NoteAttributes attributes;
  std::string largestResourceMime;
  int32_t largestResourceSize;

  _NoteMetadata__isset __isset;

  bool operator == (const NoteMetadata & rhs) const
  {
    if (!(guid == rhs.guid))
      return false;
    if (__isset.title != rhs.__isset.title)
      return false;
    else if (__isset.title && !(title == rhs.title))
      return false;
    if (__isset.contentLength != rhs.__isset.contentLength)
      return false;
    else if (__isset.contentLength && !(contentLength == rhs.contentLength))
      return false;
    if (__isset.created != rhs.__isset.created)
      return false;
    else if (__isset.created && !(created == rhs.created))
      return false;
    if (__isset.updated != rhs.__isset.updated)
      return false;
    else if (__isset.updated && !(updated == rhs.updated))
      return false;
    if (__isset.updateSequenceNum != rhs.__isset.updateSequenceNum)
      return false;
    else if (__isset.updateSequenceNum && !(updateSequenceNum == rhs.updateSequenceNum))
      return false;
    if (__isset.notebookGuid != rhs.__isset.notebookGuid)
      return false;
    else if (__isset.notebookGuid && !(notebookGuid == rhs.notebookGuid))
      return false;
    if (__isset.tagGuids != rhs.__isset.tagGuids)
      return false;
    else if (__isset.tagGuids && !(tagGuids == rhs.tagGuids))
      return false;
    if (__isset.attributes != rhs.__isset.attributes)
      return false;
    else if (__isset.attributes && !(attributes == rhs.attributes))
      return false;
    if (__isset.largestResourceMime != rhs.__isset.largestResourceMime)
      return false;
    else if (__isset.largestResourceMime && !(largestResourceMime == rhs.largestResourceMime))
      return false;
    if (__isset.largestResourceSize != rhs.__isset.largestResourceSize)
      return false;
    else if (__isset.largestResourceSize && !(largestResourceSize == rhs.largestResourceSize))
      return false;
    return true;
  }
  bool operator != (const NoteMetadata &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteMetadata & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NotesMetadataList__isset {
  _NotesMetadataList__isset() : stoppedWords(false), searchedWords(false), updateCount(false) {}
  bool stoppedWords;
  bool searchedWords;
  bool updateCount;
} _NotesMetadataList__isset;

class NotesMetadataList {
 public:

  static const char* ascii_fingerprint; // = "F3D551C521A5C489E7B722A8D6AC7205";
  static const uint8_t binary_fingerprint[16]; // = {0xF3,0xD5,0x51,0xC5,0x21,0xA5,0xC4,0x89,0xE7,0xB7,0x22,0xA8,0xD6,0xAC,0x72,0x05};

  NotesMetadataList() : startIndex(0), totalNotes(0), updateCount(0) {
  }

  virtual ~NotesMetadataList() throw() {}

  int32_t startIndex;
  int32_t totalNotes;
  std::vector<NoteMetadata>  notes;
  std::vector<std::string>  stoppedWords;
  std::vector<std::string>  searchedWords;
  int32_t updateCount;

  _NotesMetadataList__isset __isset;

  bool operator == (const NotesMetadataList & rhs) const
  {
    if (!(startIndex == rhs.startIndex))
      return false;
    if (!(totalNotes == rhs.totalNotes))
      return false;
    if (!(notes == rhs.notes))
      return false;
    if (__isset.stoppedWords != rhs.__isset.stoppedWords)
      return false;
    else if (__isset.stoppedWords && !(stoppedWords == rhs.stoppedWords))
      return false;
    if (__isset.searchedWords != rhs.__isset.searchedWords)
      return false;
    else if (__isset.searchedWords && !(searchedWords == rhs.searchedWords))
      return false;
    if (__isset.updateCount != rhs.__isset.updateCount)
      return false;
    else if (__isset.updateCount && !(updateCount == rhs.updateCount))
      return false;
    return true;
  }
  bool operator != (const NotesMetadataList &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotesMetadataList & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NotesMetadataResultSpec__isset {
  _NotesMetadataResultSpec__isset() : includeTitle(false), includeContentLength(false), includeCreated(false), includeUpdated(false), includeUpdateSequenceNum(false), includeNotebookGuid(false), includeTagGuids(false), includeAttributes(false), includeLargestResourceMime(false), includeLargestResourceSize(false) {}
  bool includeTitle;
  bool includeContentLength;
  bool includeCreated;
  bool includeUpdated;
  bool includeUpdateSequenceNum;
  bool includeNotebookGuid;
  bool includeTagGuids;
  bool includeAttributes;
  bool includeLargestResourceMime;
  bool includeLargestResourceSize;
} _NotesMetadataResultSpec__isset;

class NotesMetadataResultSpec {
 public:

  static const char* ascii_fingerprint; // = "76B8B38B98B51F67027A0B456AD81520";
  static const uint8_t binary_fingerprint[16]; // = {0x76,0xB8,0xB3,0x8B,0x98,0xB5,0x1F,0x67,0x02,0x7A,0x0B,0x45,0x6A,0xD8,0x15,0x20};

  NotesMetadataResultSpec() : includeTitle(0), includeContentLength(0), includeCreated(0), includeUpdated(0), includeUpdateSequenceNum(0), includeNotebookGuid(0), includeTagGuids(0), includeAttributes(0), includeLargestResourceMime(0), includeLargestResourceSize(0) {
  }

  virtual ~NotesMetadataResultSpec() throw() {}

  bool includeTitle;
  bool includeContentLength;
  bool includeCreated;
  bool includeUpdated;
  bool includeUpdateSequenceNum;
  bool includeNotebookGuid;
  bool includeTagGuids;
  bool includeAttributes;
  bool includeLargestResourceMime;
  bool includeLargestResourceSize;

  _NotesMetadataResultSpec__isset __isset;

  bool operator == (const NotesMetadataResultSpec & rhs) const
  {
    if (__isset.includeTitle != rhs.__isset.includeTitle)
      return false;
    else if (__isset.includeTitle && !(includeTitle == rhs.includeTitle))
      return false;
    if (__isset.includeContentLength != rhs.__isset.includeContentLength)
      return false;
    else if (__isset.includeContentLength && !(includeContentLength == rhs.includeContentLength))
      return false;
    if (__isset.includeCreated != rhs.__isset.includeCreated)
      return false;
    else if (__isset.includeCreated && !(includeCreated == rhs.includeCreated))
      return false;
    if (__isset.includeUpdated != rhs.__isset.includeUpdated)
      return false;
    else if (__isset.includeUpdated && !(includeUpdated == rhs.includeUpdated))
      return false;
    if (__isset.includeUpdateSequenceNum != rhs.__isset.includeUpdateSequenceNum)
      return false;
    else if (__isset.includeUpdateSequenceNum && !(includeUpdateSequenceNum == rhs.includeUpdateSequenceNum))
      return false;
    if (__isset.includeNotebookGuid != rhs.__isset.includeNotebookGuid)
      return false;
    else if (__isset.includeNotebookGuid && !(includeNotebookGuid == rhs.includeNotebookGuid))
      return false;
    if (__isset.includeTagGuids != rhs.__isset.includeTagGuids)
      return false;
    else if (__isset.includeTagGuids && !(includeTagGuids == rhs.includeTagGuids))
      return false;
    if (__isset.includeAttributes != rhs.__isset.includeAttributes)
      return false;
    else if (__isset.includeAttributes && !(includeAttributes == rhs.includeAttributes))
      return false;
    if (__isset.includeLargestResourceMime != rhs.__isset.includeLargestResourceMime)
      return false;
    else if (__isset.includeLargestResourceMime && !(includeLargestResourceMime == rhs.includeLargestResourceMime))
      return false;
    if (__isset.includeLargestResourceSize != rhs.__isset.includeLargestResourceSize)
      return false;
    else if (__isset.includeLargestResourceSize && !(includeLargestResourceSize == rhs.includeLargestResourceSize))
      return false;
    return true;
  }
  bool operator != (const NotesMetadataResultSpec &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NotesMetadataResultSpec & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NoteCollectionCounts__isset {
  _NoteCollectionCounts__isset() : notebookCounts(false), tagCounts(false), trashCount(false) {}
  bool notebookCounts;
  bool tagCounts;
  bool trashCount;
} _NoteCollectionCounts__isset;

class NoteCollectionCounts {
 public:

  static const char* ascii_fingerprint; // = "4A4A773E0979C92FFBF7D8D9EE2AB6F9";
  static const uint8_t binary_fingerprint[16]; // = {0x4A,0x4A,0x77,0x3E,0x09,0x79,0xC9,0x2F,0xFB,0xF7,0xD8,0xD9,0xEE,0x2A,0xB6,0xF9};

  NoteCollectionCounts() : trashCount(0) {
  }

  virtual ~NoteCollectionCounts() throw() {}

  std::map<evernote::edam::Guid, int32_t>  notebookCounts;
  std::map<evernote::edam::Guid, int32_t>  tagCounts;
  int32_t trashCount;

  _NoteCollectionCounts__isset __isset;

  bool operator == (const NoteCollectionCounts & rhs) const
  {
    if (__isset.notebookCounts != rhs.__isset.notebookCounts)
      return false;
    else if (__isset.notebookCounts && !(notebookCounts == rhs.notebookCounts))
      return false;
    if (__isset.tagCounts != rhs.__isset.tagCounts)
      return false;
    else if (__isset.tagCounts && !(tagCounts == rhs.tagCounts))
      return false;
    if (__isset.trashCount != rhs.__isset.trashCount)
      return false;
    else if (__isset.trashCount && !(trashCount == rhs.trashCount))
      return false;
    return true;
  }
  bool operator != (const NoteCollectionCounts &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteCollectionCounts & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AdImpressions {
 public:

  static const char* ascii_fingerprint; // = "6435B39C87AB0E30F30BEDEFD7328C0D";
  static const uint8_t binary_fingerprint[16]; // = {0x64,0x35,0xB3,0x9C,0x87,0xAB,0x0E,0x30,0xF3,0x0B,0xED,0xEF,0xD7,0x32,0x8C,0x0D};

  AdImpressions() : adId(0), impressionCount(0), impressionTime(0) {
  }

  virtual ~AdImpressions() throw() {}

  int32_t adId;
  int32_t impressionCount;
  int32_t impressionTime;

  bool operator == (const AdImpressions & rhs) const
  {
    if (!(adId == rhs.adId))
      return false;
    if (!(impressionCount == rhs.impressionCount))
      return false;
    if (!(impressionTime == rhs.impressionTime))
      return false;
    return true;
  }
  bool operator != (const AdImpressions &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AdImpressions & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AdParameters__isset {
  _AdParameters__isset() : clientLanguage(false), impressions(false), supportHtml(false), clientProperties(false) {}
  bool clientLanguage;
  bool impressions;
  bool supportHtml;
  bool clientProperties;
} _AdParameters__isset;

class AdParameters {
 public:

  static const char* ascii_fingerprint; // = "E18D1AB8E98004C28B4CF16AA27309AA";
  static const uint8_t binary_fingerprint[16]; // = {0xE1,0x8D,0x1A,0xB8,0xE9,0x80,0x04,0xC2,0x8B,0x4C,0xF1,0x6A,0xA2,0x73,0x09,0xAA};

  AdParameters() : clientLanguage(""), supportHtml(0) {
  }

  virtual ~AdParameters() throw() {}

  std::string clientLanguage;
  std::vector<AdImpressions>  impressions;
  bool supportHtml;
  std::map<std::string, std::string>  clientProperties;

  _AdParameters__isset __isset;

  bool operator == (const AdParameters & rhs) const
  {
    if (__isset.clientLanguage != rhs.__isset.clientLanguage)
      return false;
    else if (__isset.clientLanguage && !(clientLanguage == rhs.clientLanguage))
      return false;
    if (__isset.impressions != rhs.__isset.impressions)
      return false;
    else if (__isset.impressions && !(impressions == rhs.impressions))
      return false;
    if (__isset.supportHtml != rhs.__isset.supportHtml)
      return false;
    else if (__isset.supportHtml && !(supportHtml == rhs.supportHtml))
      return false;
    if (__isset.clientProperties != rhs.__isset.clientProperties)
      return false;
    else if (__isset.clientProperties && !(clientProperties == rhs.clientProperties))
      return false;
    return true;
  }
  bool operator != (const AdParameters &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AdParameters & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _NoteEmailParameters__isset {
  _NoteEmailParameters__isset() : guid(false), note(false), toAddresses(false), ccAddresses(false), subject(false), message(false) {}
  bool guid;
  bool note;
  bool toAddresses;
  bool ccAddresses;
  bool subject;
  bool message;
} _NoteEmailParameters__isset;

class NoteEmailParameters {
 public:

  static const char* ascii_fingerprint; // = "F10DBB1792130CE06A0625E86739805B";
  static const uint8_t binary_fingerprint[16]; // = {0xF1,0x0D,0xBB,0x17,0x92,0x13,0x0C,0xE0,0x6A,0x06,0x25,0xE8,0x67,0x39,0x80,0x5B};

  NoteEmailParameters() : guid(""), subject(""), message("") {
  }

  virtual ~NoteEmailParameters() throw() {}

  std::string guid;
  evernote::edam::Note note;
  std::vector<std::string>  toAddresses;
  std::vector<std::string>  ccAddresses;
  std::string subject;
  std::string message;

  _NoteEmailParameters__isset __isset;

  bool operator == (const NoteEmailParameters & rhs) const
  {
    if (__isset.guid != rhs.__isset.guid)
      return false;
    else if (__isset.guid && !(guid == rhs.guid))
      return false;
    if (__isset.note != rhs.__isset.note)
      return false;
    else if (__isset.note && !(note == rhs.note))
      return false;
    if (__isset.toAddresses != rhs.__isset.toAddresses)
      return false;
    else if (__isset.toAddresses && !(toAddresses == rhs.toAddresses))
      return false;
    if (__isset.ccAddresses != rhs.__isset.ccAddresses)
      return false;
    else if (__isset.ccAddresses && !(ccAddresses == rhs.ccAddresses))
      return false;
    if (__isset.subject != rhs.__isset.subject)
      return false;
    else if (__isset.subject && !(subject == rhs.subject))
      return false;
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const NoteEmailParameters &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteEmailParameters & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class NoteVersionId {
 public:

  static const char* ascii_fingerprint; // = "D794A4D314465A1EC7A44F1EEE802646";
  static const uint8_t binary_fingerprint[16]; // = {0xD7,0x94,0xA4,0xD3,0x14,0x46,0x5A,0x1E,0xC7,0xA4,0x4F,0x1E,0xEE,0x80,0x26,0x46};

  NoteVersionId() : updateSequenceNum(0), updated(0), saved(0), title("") {
  }

  virtual ~NoteVersionId() throw() {}

  int32_t updateSequenceNum;
  evernote::edam::Timestamp updated;
  evernote::edam::Timestamp saved;
  std::string title;

  bool operator == (const NoteVersionId & rhs) const
  {
    if (!(updateSequenceNum == rhs.updateSequenceNum))
      return false;
    if (!(updated == rhs.updated))
      return false;
    if (!(saved == rhs.saved))
      return false;
    if (!(title == rhs.title))
      return false;
    return true;
  }
  bool operator != (const NoteVersionId &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NoteVersionId & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

}} // namespace

#endif

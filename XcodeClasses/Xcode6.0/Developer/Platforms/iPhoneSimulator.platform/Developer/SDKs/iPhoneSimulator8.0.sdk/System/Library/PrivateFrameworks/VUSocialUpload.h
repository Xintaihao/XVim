//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
// UUID: A56F87B5-20E7-390E-B9AA-518510AA0B7B
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 97.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol FlickrComposeOptionViewDelegate <NSObject>
- (void)flickrComposeOptionView:(UIViewController *)arg1 didFinishWithSelection:(id)arg2;
- (ACAccount *)flickrAccount;
- (ACAccountStore *)accountStore;
@end

@protocol FlickrPhotoSetTableDelegate <NSObject>
- (void)reloadData;
@end

@protocol FlickrRemoteSessionProtocol
- (void)uploadPosts:(NSArray *)arg1 withXPCTransferCompletion:(void (^)(NSNumber *, NSError *))arg2;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol NSURLConnectionDelegate <NSObject>

@optional
- (void)connection:(NSURLConnection *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)connection:(NSURLConnection *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)connection:(NSURLConnection *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(NSURLConnection *)arg1;
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
@end

@protocol NSXMLParserDelegate <NSObject>

@optional
- (void)parser:(NSXMLParser *)arg1 validationErrorOccurred:(NSError *)arg2;
- (void)parser:(NSXMLParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (NSData *)parser:(NSXMLParser *)arg1 resolveExternalEntityName:(NSString *)arg2 systemID:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg1 foundCDATA:(NSData *)arg2;
- (void)parser:(NSXMLParser *)arg1 foundComment:(NSString *)arg2;
- (void)parser:(NSXMLParser *)arg1 foundProcessingInstructionWithTarget:(NSString *)arg2 data:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg1 foundIgnorableWhitespace:(NSString *)arg2;
- (void)parser:(NSXMLParser *)arg1 foundCharacters:(NSString *)arg2;
- (void)parser:(NSXMLParser *)arg1 didEndMappingPrefix:(NSString *)arg2;
- (void)parser:(NSXMLParser *)arg1 didStartMappingPrefix:(NSString *)arg2 toURI:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg1 didEndElement:(NSString *)arg2 namespaceURI:(NSString *)arg3 qualifiedName:(NSString *)arg4;
- (void)parser:(NSXMLParser *)arg1 didStartElement:(NSString *)arg2 namespaceURI:(NSString *)arg3 qualifiedName:(NSString *)arg4 attributes:(NSDictionary *)arg5;
- (void)parser:(NSXMLParser *)arg1 foundExternalEntityDeclarationWithName:(NSString *)arg2 publicID:(NSString *)arg3 systemID:(NSString *)arg4;
- (void)parser:(NSXMLParser *)arg1 foundInternalEntityDeclarationWithName:(NSString *)arg2 value:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg1 foundElementDeclarationWithName:(NSString *)arg2 model:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg1 foundAttributeDeclarationWithName:(NSString *)arg2 forElement:(NSString *)arg3 type:(NSString *)arg4 defaultValue:(NSString *)arg5;
- (void)parser:(NSXMLParser *)arg1 foundUnparsedEntityDeclarationWithName:(NSString *)arg2 publicID:(NSString *)arg3 systemID:(NSString *)arg4 notationName:(NSString *)arg5;
- (void)parser:(NSXMLParser *)arg1 foundNotationDeclarationWithName:(NSString *)arg2 publicID:(NSString *)arg3 systemID:(NSString *)arg4;
- (void)parserDidEndDocument:(NSXMLParser *)arg1;
- (void)parserDidStartDocument:(NSXMLParser *)arg1;
@end

@protocol UITextFieldDelegate <NSObject>

@optional
- (_Bool)textFieldShouldReturn:(UITextField *)arg1;
- (_Bool)textFieldShouldClear:(UITextField *)arg1;
- (_Bool)textField:(UITextField *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)textFieldDidEndEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldEndEditing:(UITextField *)arg1;
- (void)textFieldDidBeginEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldBeginEditing:(UITextField *)arg1;
@end

@protocol VimeoComposeOptionViewDelegate <NSObject>
- (void)vimeoComposeOptionsViewDidFinish:(VimeoDetailsController *)arg1;
@end

@protocol VimeoRemoteSessionProtocol
- (void)uploadPost:(NSDictionary *)arg1 withXPCTransferCompletion:(void (^)(NSNumber *, NSError *))arg2;
@end

@interface FlickrAudienceController : UITableViewController
{
    int _audience;
    id <FlickrComposeOptionViewDelegate> _delegate;
}

+ (id)titleForAudience:(int)arg1;
@property(nonatomic) __weak id <FlickrComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int audience; // @synthesize audience=_audience;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (struct CGSize)preferredContentSize;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadView;

@end

@interface FlickrComposeViewController : SLComposeServiceViewController <FlickrComposeOptionViewDelegate>
{
    FlickrUploadSession *_session;
    UIImageView *_logoView;
    _Bool _hasFlickrAccount;
    SLComposeSheetConfigurationItem *_photoSetConfigurationItem;
    FlickrPhotoSetController *_photoSetController;
    NSString *_photoSetTitle;
    long long _photoSetID;
    FlickrPhotoSetManager *_manager;
    SLComposeSheetConfigurationItem *_audienceConfigurationItem;
    FlickrAudienceController *_audienceController;
    int _audience;
    ACAccountStore *_accountStore;
    ACAccount *_flickrAccount;
}

@property(retain, nonatomic) ACAccount *flickrAccount; // @synthesize flickrAccount=_flickrAccount;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (void)didSelectPost;
- (unsigned int)postVisibility;
- (void)viewDidAppear:(_Bool)arg1;
- (void)flickrComposeOptionView:(id)arg1 didFinishWithSelection:(id)arg2;
- (id)configurationItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface FlickrPhotoSet : NSObject
{
    long long _identifier;
    long long _primaryPhotoID;
    long long _farmID;
    long long _serverID;
    NSString *_secret;
    NSString *_title;
    NSString *_photoSetDescription;
}

@property(copy, nonatomic) NSString *photoSetDescription; // @synthesize photoSetDescription=_photoSetDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(nonatomic) long long serverID; // @synthesize serverID=_serverID;
@property(nonatomic) long long farmID; // @synthesize farmID=_farmID;
@property(nonatomic) long long primaryPhotoID; // @synthesize primaryPhotoID=_primaryPhotoID;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;

@end

@interface FlickrPhotoSetController : UITableViewController <FlickrPhotoSetTableDelegate>
{
    id <FlickrComposeOptionViewDelegate> _delegate;
    FlickrPhotoSetManager *_manager;
    long long _photoSetID;
    NSString *_photoSetTitle;
    long long _selectedIndexRow;
}

@property(nonatomic) long long selectedIndexRow; // @synthesize selectedIndexRow=_selectedIndexRow;
@property(readonly, nonatomic) NSString *photoSetTitle; // @synthesize photoSetTitle=_photoSetTitle;
@property(readonly, nonatomic) long long photoSetID; // @synthesize photoSetID=_photoSetID;
@property(retain, nonatomic) FlickrPhotoSetManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <FlickrComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadData;
- (id)initWithPhotoSetManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface FlickrRequest : NSObject
{
}

- (void)_sendRequestToEndPoint:(id)arg1 withParams:(id)arg2 requestModifications:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 failedAttempts:(unsigned long long)arg5;
- (void)sendRequestToEndPoint:(id)arg1 withParams:(id)arg2 requestModifications:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end

@interface FlickrPhotoSetManager : FlickrRequest
{
    id <FlickrComposeOptionViewDelegate> _delegate;
    id <FlickrPhotoSetTableDelegate> _tableDelegate;
    NSArray *_photoSets;
}

@property(readonly, nonatomic) NSArray *photoSets; // @synthesize photoSets=_photoSets;
@property(nonatomic) __weak id <FlickrPhotoSetTableDelegate> tableDelegate; // @synthesize tableDelegate=_tableDelegate;
@property(nonatomic) __weak id <FlickrComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshPhotoSets;

@end

@interface FlickrPhotoSetResponse : NSObject <NSXMLParserDelegate>
{
    _Bool _success;
    NSString *_errorDescription;
    FlickrPhotoSet *_currentPhotoSet;
    NSMutableString *_dataString;
    long long _stage;
    NSMutableArray *_photoSets;
}

+ (id)responseWithData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *photoSets; // @synthesize photoSets=_photoSets;
@property(nonatomic) long long stage; // @synthesize stage=_stage;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface FlickrPost : FlickrRequest <NSURLConnectionDelegate>
{
    _Bool _hidden;
    unsigned int _visibility;
    int _safetyLevel;
    int _contentType;
    NSURL *_assetURL;
    NSData *_photoData;
    NSString *_title;
    NSString *_postDescription;
    NSArray *_tags;
    long long _photoSetID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) int safetyLevel; // @synthesize safetyLevel=_safetyLevel;
@property(nonatomic) unsigned int visibility; // @synthesize visibility=_visibility;
@property(nonatomic) long long photoSetID; // @synthesize photoSetID=_photoSetID;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *postDescription; // @synthesize postDescription=_postDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSData *photoData; // @synthesize photoData=_photoData;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void).cxx_destruct;
- (_Bool)uploadToAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_uploadData:(id)arg1 toAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface FlickrResponse : NSObject <NSXMLParserDelegate>
{
    NSMutableString *_partialPhotoIDString;
    _Bool _workaround;
    _Bool _success;
    int _errorCode;
    long long _photoID;
    NSString *_errorDescription;
}

+ (id)responseWithData:(id)arg1;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) long long photoID; // @synthesize photoID=_photoID;
@property(nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface FlickrUploadSession : NSObject
{
    id <FlickrRemoteSessionProtocol> _remoteSession;
}

+ (id)sharedSession;
- (void).cxx_destruct;
- (_Bool)uploadPosts:(id)arg1 error:(id *)arg2;
- (id)init;

@end

@interface NSString (VUSocialUploadAdditions)
- (id)urlParameterEscapedString;
@end

@interface VUDataReader : NSObject
{
    NSFileHandle *_readHandle;
    NSURL *_URL;
}

+ (id)dataReaderWithURL:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSFileHandle *readHandle; // @synthesize readHandle=_readHandle;
- (void).cxx_destruct;
- (id)dataWithRange:(struct _NSRange)arg1;
- (unsigned long long)length;
- (_Bool)_openFileIfNeededWithError:(id *)arg1;
- (void)dealloc;

@end

@interface VURemoteSession : SLRemoteSession
{
    ACAccountStore *_accountStore;
}

+ (void)refreshPowerAssertion;
+ (void)decrementPowerAssertion;
+ (void)incrementPowerAssertion;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;

@end

@interface VimeoComposeViewController : SLComposeServiceViewController <VimeoComposeOptionViewDelegate>
{
    VimeoUploadSession *_session;
    UIImageView *_logoView;
    SLComposeSheetConfigurationItem *_detailsConfigurationItem;
    VimeoDetailsController *_detailsController;
    ACAccountStore *_accountStore;
    ACAccount *_vimeoAccount;
    NSString *_postDescription;
    NSArray *_tags;
    long long _videoSize;
    long long _privacySettings;
}

@property(nonatomic) long long privacySettings; // @synthesize privacySettings=_privacySettings;
@property(nonatomic) long long videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *postDescription; // @synthesize postDescription=_postDescription;
@property(retain, nonatomic) ACAccount *vimeoAccount; // @synthesize vimeoAccount=_vimeoAccount;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)didSelectPost;
- (_Bool)validateText:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)vimeoComposeOptionsViewDidFinish:(id)arg1;
- (id)configurationItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface VimeoDetailsController : UITableViewController <UITextFieldDelegate>
{
    UITextView *_descriptionTextView;
    UITableViewCell *_descriptionCell;
    NSMutableArray *_tags;
    id <VimeoComposeOptionViewDelegate> _delegate;
    NSMutableArray *_videoSizes;
    long long _videoSize;
    long long _privacySetting;
    NSIndexPath *_indexPathForPendingFirstResponder;
    NSArray *_videoSizeStrings;
    NSArray *_videoSizeFormatStrings;
    NSArray *_privacyLevels;
}

+ (long long)defaultVideoSize;
@property(retain, nonatomic) NSArray *privacyLevels; // @synthesize privacyLevels=_privacyLevels;
@property(retain, nonatomic) NSArray *videoSizeFormatStrings; // @synthesize videoSizeFormatStrings=_videoSizeFormatStrings;
@property(retain, nonatomic) NSArray *videoSizeStrings; // @synthesize videoSizeStrings=_videoSizeStrings;
@property(retain, nonatomic) NSIndexPath *indexPathForPendingFirstResponder; // @synthesize indexPathForPendingFirstResponder=_indexPathForPendingFirstResponder;
@property(readonly, nonatomic) long long privacySetting; // @synthesize privacySetting=_privacySetting;
@property(readonly, nonatomic) long long videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, nonatomic) NSMutableArray *videoSizes; // @synthesize videoSizes=_videoSizes;
@property(nonatomic) __weak id <VimeoComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)_tagIndexPathForTextField:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (struct CGSize)preferredContentSize;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) NSString *videoDescription;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface VimeoPost : NSObject
{
    NSURL *_baseURL;
    int _uploadState;
    NSString *_videoID;
    NSString *_ticketID;
    NSURL *_uploadEndpoint;
    _Bool _continuingUpload;
    unsigned long long _lastByteStored;
    int _retryCount;
    _Bool _canUploadOverCellular;
    ALAssetsLibrary *_assetsLibrary;
    id <VimeoPostDelegate> _delegate;
    NSURL *_assetURL;
    NSData *_assetData;
    NSString *_title;
    NSString *_postDescription;
    NSArray *_tags;
    unsigned long long _accessType;
    long long _videoSize;
    long long _privacySettings;
    ACAccount *_account;
    ALAsset *_asset;
    NSURL *_exportedVideoURL;
    VUDataReader *_dataReader;
}

+ (id)dictionaryWithResponseData:(id)arg1 error:(id *)arg2;
+ (void)getAvailableQuotaForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)_isUsingCellular;
@property(retain, nonatomic) VUDataReader *dataReader; // @synthesize dataReader=_dataReader;
@property(retain, nonatomic) NSURL *exportedVideoURL; // @synthesize exportedVideoURL=_exportedVideoURL;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) long long privacySettings; // @synthesize privacySettings=_privacySettings;
@property(nonatomic) long long videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned long long accessType; // @synthesize accessType=_accessType;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *postDescription; // @synthesize postDescription=_postDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) __weak id <VimeoPostDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)failWithErrorCode:(int)arg1;
- (void)failWithError:(id)arg1;
- (void)_warningWithCode:(int)arg1;
- (id)_tags;
- (void)_setPrivacy;
- (void)_setTags;
- (void)_setDescription;
- (void)_setTitle;
- (void)_commit;
- (void)_verify;
- (void)_uploadData;
- (void)_getTicket;
- (void)_checkQuota;
- (unsigned long long)postSize;
- (_Bool)uploadToAccount:(id)arg1 error:(id *)arg2;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)assetsLibrary;
- (void)_cleanup;
- (id)init;

@end

@interface VimeoUploadSession : NSObject
{
    id <VimeoRemoteSessionProtocol> _remoteSession;
}

+ (id)sharedSession;
- (void).cxx_destruct;
- (_Bool)uploadPost:(id)arg1 error:(id *)arg2;
- (id)init;

@end


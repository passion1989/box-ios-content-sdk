//
//  BOXFolderUpdateRequest.h
//  BoxContentSDK
//

#import "BOXFolderRequest.h"
#import "BOXSharedLink.h"

@interface BOXFolderUpdateRequest : BOXFolderRequest

@property (nonatomic, readonly, strong) NSString *folderID;
@property (nonatomic, readwrite, strong) NSString *folderName;
@property (nonatomic, readwrite, strong) NSString *folderDescription;
@property (nonatomic, readwrite, strong) NSString *parentID;

@property (nonatomic, readwrite, strong) BOXSharedLinkAccessLevel *sharedLinkAccessLevel;
@property (nonatomic, readwrite, strong) NSDate *sharedLinkExpirationDate;
@property (nonatomic, readwrite, assign) BOOL sharedLinkPermissionCanDownload;
@property (nonatomic, readwrite, assign) BOOL sharedLinkPermissionCanPreview;

@property (nonatomic, readwrite, strong) NSString *folderUploadEmailAddress;
@property (nonatomic, readwrite, strong) BOXFolderUploadEmailAccessLevel *folderUploadEmailAccess;

@property (nonatomic, readwrite, strong) NSString *ownerUserID;
@property (nonatomic, readwrite, strong) NSString *syncState;

@property (nonatomic, readwrite, strong) NSString *matchingEtag;

- (instancetype)initWithFolderID:(NSString *)folderID;

@end

{"payload":{"allShortcutsEnabled":false,"fileTree":{"jozve_examples":{"items":[{"name":"0.txt","path":"jozve_examples/0.txt","contentType":"file"},{"name":"pg_11.cpp","path":"jozve_examples/pg_11.cpp","contentType":"file"},{"name":"pg_15_circle.cpp","path":"jozve_examples/pg_15_circle.cpp","contentType":"file"},{"name":"pg_18.cpp","path":"jozve_examples/pg_18.cpp","contentType":"file"},{"name":"pg_19_1.cpp","path":"jozve_examples/pg_19_1.cpp","contentType":"file"},{"name":"pg_19_2.cpp","path":"jozve_examples/pg_19_2.cpp","contentType":"file"},{"name":"pg_19_3.cpp","path":"jozve_examples/pg_19_3.cpp","contentType":"file"},{"name":"pg_19_4.cpp","path":"jozve_examples/pg_19_4.cpp","contentType":"file"},{"name":"pg_19_5.cpp","path":"jozve_examples/pg_19_5.cpp","contentType":"file"},{"name":"pg_20_1.cpp","path":"jozve_examples/pg_20_1.cpp","contentType":"file"},{"name":"pg_20_2.cpp","path":"jozve_examples/pg_20_2.cpp","contentType":"file"},{"name":"pg_21_1.cpp","path":"jozve_examples/pg_21_1.cpp","contentType":"file"},{"name":"pg_21_2.cpp","path":"jozve_examples/pg_21_2.cpp","contentType":"file"},{"name":"pg_21_3.cpp","path":"jozve_examples/pg_21_3.cpp","contentType":"file"},{"name":"pg_22_1.cpp","path":"jozve_examples/pg_22_1.cpp","contentType":"file"},{"name":"pg_22_2.cpp","path":"jozve_examples/pg_22_2.cpp","contentType":"file"},{"name":"pg_22_3_fibonacci.cpp","path":"jozve_examples/pg_22_3_fibonacci.cpp","contentType":"file"},{"name":"pg_23.cpp","path":"jozve_examples/pg_23.cpp","contentType":"file"},{"name":"pg_26_1.cpp","path":"jozve_examples/pg_26_1.cpp","contentType":"file"},{"name":"pg_26_2.cpp","path":"jozve_examples/pg_26_2.cpp","contentType":"file"},{"name":"pg_27.cpp","path":"jozve_examples/pg_27.cpp","contentType":"file"},{"name":"pg_28_1.cpp","path":"jozve_examples/pg_28_1.cpp","contentType":"file"},{"name":"pg_28_2.cpp","path":"jozve_examples/pg_28_2.cpp","contentType":"file"},{"name":"pg_29_1.cpp","path":"jozve_examples/pg_29_1.cpp","contentType":"file"},{"name":"pg_29_2.cpp","path":"jozve_examples/pg_29_2.cpp","contentType":"file"},{"name":"pg_30_1.cpp","path":"jozve_examples/pg_30_1.cpp","contentType":"file"},{"name":"pg_30_2.cpp","path":"jozve_examples/pg_30_2.cpp","contentType":"file"},{"name":"pg_31_1.cpp","path":"jozve_examples/pg_31_1.cpp","contentType":"file"},{"name":"pg_31_2.cpp","path":"jozve_examples/pg_31_2.cpp","contentType":"file"},{"name":"pg_32_1.cpp","path":"jozve_examples/pg_32_1.cpp","contentType":"file"},{"name":"pg_32_2.cpp","path":"jozve_examples/pg_32_2.cpp","contentType":"file"},{"name":"pg_32_3.cpp","path":"jozve_examples/pg_32_3.cpp","contentType":"file"},{"name":"pg_33_1.cpp","path":"jozve_examples/pg_33_1.cpp","contentType":"file"},{"name":"pg_33_2.cpp","path":"jozve_examples/pg_33_2.cpp","contentType":"file"},{"name":"pg_34_1(insertion_sort).cpp","path":"jozve_examples/pg_34_1(insertion_sort).cpp","contentType":"file"},{"name":"pg_34_2(bubble_sort).cpp","path":"jozve_examples/pg_34_2(bubble_sort).cpp","contentType":"file"},{"name":"pg_35.cpp","path":"jozve_examples/pg_35.cpp","contentType":"file"},{"name":"pg_36_1.cpp","path":"jozve_examples/pg_36_1.cpp","contentType":"file"},{"name":"pg_36_2.cpp","path":"jozve_examples/pg_36_2.cpp","contentType":"file"},{"name":"pg_38_1.cpp","path":"jozve_examples/pg_38_1.cpp","contentType":"file"},{"name":"pg_38_2.cpp","path":"jozve_examples/pg_38_2.cpp","contentType":"file"},{"name":"pg_38_3.cpp","path":"jozve_examples/pg_38_3.cpp","contentType":"file"},{"name":"pg_39.cpp","path":"jozve_examples/pg_39.cpp","contentType":"file"},{"name":"pg_41.cpp","path":"jozve_examples/pg_41.cpp","contentType":"file"},{"name":"pg_42.cpp","path":"jozve_examples/pg_42.cpp","contentType":"file"},{"name":"pg_43.cpp","path":"jozve_examples/pg_43.cpp","contentType":"file"},{"name":"pg_44.cpp","path":"jozve_examples/pg_44.cpp","contentType":"file"},{"name":"pg_45.cpp","path":"jozve_examples/pg_45.cpp","contentType":"file"}],"totalCount":48},"":{"items":[{"name":"jozve_examples","path":"jozve_examples","contentType":"directory"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":2}},"fileTreeProcessingTime":5.341342,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":736665719,"defaultBranch":"main","name":"mabani_codes_1402","ownerLogin":"lloorroo","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-12-28T14:24:00.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/155083829?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1703776071.0","canEdit":false,"refType":"branch","currentOid":"0cb642593aa26d4a7bda7bda3a75d4c058341dba"},"path":"jozve_examples/pg_29_1.cpp","currentUser":null,"blob":{"rawLines":["#include <iostream>\r","using namespace std;\r","\r","int main()\r","{\r","    int i, j, sum, n;\r","    cout << \"Enter n:\";\r","    cin >> n;\r","    for (i = 0; i <= 32767; i++)\r","    {\r","        j = i;\r","        sum = 0;\r","        while (j > 0)\r","        {\r","            sum = sum + j % 10;\r","            j /= 10;\r","        }\r","        if (sum == n)\r","        {\r","            cout << i;\r","            break;\r","        }\r","    }\r","    return 0;\r","}"],"stylingDirectives":[[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":18,"end":19,"cssClass":"pl-pds"}],[{"start":0,"end":5,"cssClass":"pl-k"},{"start":6,"end":15,"cssClass":"pl-k"},{"start":16,"end":19,"cssClass":"pl-en"},{"start":19,"end":20,"cssClass":"pl-k"}],[],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":4,"end":8,"cssClass":"pl-en"}],[],[{"start":4,"end":7,"cssClass":"pl-k"}],[{"start":12,"end":22,"cssClass":"pl-s"},{"start":12,"end":13,"cssClass":"pl-pds"},{"start":21,"end":22,"cssClass":"pl-pds"}],[],[{"start":4,"end":7,"cssClass":"pl-k"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":21,"end":26,"cssClass":"pl-c1"}],[],[],[{"start":14,"end":15,"cssClass":"pl-c1"}],[{"start":8,"end":13,"cssClass":"pl-k"},{"start":19,"end":20,"cssClass":"pl-c1"}],[],[{"start":28,"end":30,"cssClass":"pl-c1"}],[{"start":17,"end":19,"cssClass":"pl-c1"}],[],[{"start":8,"end":10,"cssClass":"pl-k"}],[],[],[{"start":12,"end":17,"cssClass":"pl-k"}],[],[],[{"start":4,"end":10,"cssClass":"pl-k"},{"start":11,"end":12,"cssClass":"pl-c1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/lloorroo/mabani_codes_1402/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/lloorroo/mabani_codes_1402/security/dependabot","repoSecurityAndAnalysisPath":"/lloorroo/mabani_codes_1402/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"pg_29_1.cpp","displayUrl":"https://github.com/lloorroo/mabani_codes_1402/blob/main/jozve_examples/pg_29_1.cpp?raw=true","headerInfo":{"blobSize":"410 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"4ab8830","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Flloorroo%2Fmabani_codes_1402%2Fblob%2Fmain%2Fjozve_examples%2Fpg_29_1.cpp","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"25","truncatedSloc":"24"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C++","languageID":43,"large":false,"loggedIn":false,"newDiscussionPath":"/lloorroo/mabani_codes_1402/discussions/new","newIssuePath":"/lloorroo/mabani_codes_1402/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/lloorroo/mabani_codes_1402/blob/main/jozve_examples/pg_29_1.cpp","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/lloorroo/mabani_codes_1402/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/lloorroo/mabani_codes_1402/raw/main/jozve_examples/pg_29_1.cpp","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"lloorroo","repoName":"mabani_codes_1402","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timed_out":false,"not_analyzed":false,"symbols":[{"name":"main","kind":"function","ident_start":49,"ident_end":53,"extent_start":45,"extent_end":410,"fully_qualified_name":"main","ident_utf16":{"start":{"line_number":3,"utf16_col":4},"end":{"line_number":3,"utf16_col":8}},"extent_utf16":{"start":{"line_number":3,"utf16_col":0},"end":{"line_number":25,"utf16_col":0}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/lloorroo/mabani_codes_1402/branches":{"post":"jGF_y-oGdgYfe9i2DXgB_iIpeovrf64DmLu0Fj-FxSidGd2tC2I_GExcNpY4-53Vwst7hQ07Qs1ZDgJh9fePBA"},"/repos/preferences":{"post":"IUQ_UjDCTGcGdp-_6Y0gpQfkNfx-gpnNN9nXEw6IVYwqGEdvv31usFn6LzhduHGZCQV5FVbwsfFcvxxeFV4bAQ"}}},"title":"mabani_codes_1402/jozve_examples/pg_29_1.cpp at main · lloorroo/mabani_codes_1402"}
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("NID=511=roZ3CViKINaGdNgZJM9YX7yA4FNaWzzrypwHpOOb4KYlk2GavpnpOc9SvMVI-06WoE851MdNuUttLMwqwZH6PQMraJf7sZM1yfXN2sKiVJRSwfcmpCbc0senhwQC07v9_vfk7_qVwIVCrj7RNiGf-fk597nPz05XNXfVS237cN8; DOMAIN=safebrowsing.google.com");

	lr_think_time(9);

	web_custom_request("crx-telemetry", 
		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/crx-telemetry", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x08\\x80\\xE5\\xC3\\xD0\\xCC1\\x12M\nK\n ahfgeienlihckogmohjhadlkjgocpleb\\x12\\x030.2\\x1A\tWeb Store \\x99\\xA0\\xB7\\xB1\\x941(\\x000\\x008\\x00@\\x00H\\x00P\\x04X\\x05`\\x00h\\x00\\x12w\nu\n efaidnbmnnnibpcajpcglclefindmkaj\\x12\t23.12.1.0\\x1A,Adobe Acrobat: PDF edit, convert, sign tools \\xB5\\x95\\xDF\\xAC\\xC71(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x06`\\x00h\\x80@\\x12O\nM\n ljngjbnaijcbncmcnjfhigebomdlkcjo\\x12\\x066.1.12\\x1A\\x08ChroPath \\xD9\\xCF\\x8A\\x95\\xBB1"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12r\np\n mbopgmdnpcbohhpnfglgohlbhfongabi\\x12\\x056.1.0\\x1A,BlazeMeter | The Continuous Testing Platform \\x94\\xD8\\xCE\\xE9\\xC31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12S\nQ\n mhjfbmdgcfjbbpaeojofohoefgiehjai\\x12\\x011\\x1A\\x11Chrome PDF Viewer \\x9B\\xA0\\xB7\\xB1\\x941(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12S\nQ\n mooikfkahbdckldjjndioackbalphokd\\x12\\x063.17.2\\x1A\\x0CSelenium IDE "
		"\\xFA\\xBE\\x8C\\x95\\xBB1(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12R\nP\n ndgimibanhlabgdgjcpbbndiehljcpfh\\x12\\x055.1.8\\x1A\\x0CSelectorsHub \\x9A\\xBD\\xAF\\xC3\\xCC1(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12Y\nW\n neajdppkdcdipfabeoofebfddakdcjhd\\x12\\x031.0\\x1A\\x15Google Network Speech \\x9C\\xA0\\xB7\\xB1\\x941(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12`\n^\n njkcecfgjklpakiaknffokgoafimlggp\\x12\r2023.4.0.1163\\x1A\\x12OpenText UFT "
		"Agent \\xB8\\x85\\xF6\\xAB\\xCA1(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x06`\\x00h\\x00\\x12V\nT\n nkeimhogjdpnpccoofpliimaahmaaome\\x12\\x061.3.21\\x1A\\x0FGoogle Hangouts \\x9C\\xA0\\xB7\\xB1\\x941(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12a\n_\n nmmhkkegccagdldgiimedpiccmgmieda\\x12\\x071.0.0.6\\x1A\\x19Chrome Web Store Payments \\xF0\\xEE\\xE7\\xB9\\x971(\\x010\\x008\\x01@\\x01H\\x00P\\x06X\n`\\x00h\\x00", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(14);

	lr_start_transaction("enter the store");

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASGQnfh7zKjxssDxIFDQKP-2ghBmzWW-umemo=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("enter the store",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("select fish");

	web_image("sm_fish.gif", 
		"Src=../images/sm_fish.gif", 
		"Snapshot=t6.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_end_transaction("select fish",LR_AUTO);

	lr_think_time(6);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:0X_mQXzG502u_EAxYeGxX2v74jhLdYs83oIK3tkmigg&cup2hreq=776f539c79dd061446354c3470bb2a5bc7f2fa43612bd8c9218d1b3c8416eb29", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{b8b1e31e-df1b-4ef3-ada6-7f011b042dde}\",\"rd\":6210},\"updatecheck\":{},\"version\":\""
		"1.3.36.311\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5818,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{2fab5c37-de98-4706-990e-0e294f69c66c}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\""
		"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{57f4ec4c-b1d0-4af1-8ca0-e613e65ff594}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"en-US\","
		"\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{5c48d4ee-caf8-4c8a-bd2a-58788e041491}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.50a410468d64fd55a0fc41dd22d574883f13386eb147b0b5b96ee66c118d4d6e\"}]},\"ping\":{\"ping_freshness\":\"{3645149d-9e0e-4f73-9096-34062aede9f6}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:25i9@0.025\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.23d23205a85fd30aa8d58030843cbf59c8700f1b60aaf1c5e058e574b3876c7d"
		"\"}]},\"ping\":{\"ping_freshness\":\"{0f2bc9af-d499-433a-b388-cc77d241f5f9}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"427\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.9d37baa43d65279bfa389c2ba846740d88e261100d32926943d4b736c58a995d\"}]},\"ping\":{\"ping_freshness\":\"{e7e16d10-7aa3-4a0a-b81a-578a15b40e0d}\",\"rd\":6210},\""
		"updatecheck\":{},\"version\":\"2023.12.26.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{9f6132e1-cf18-497a-8d9d-a7661d148762}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{2c60b581-47fd-49b0-8afe-b83ac94d7a7c}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{a1571425-2804-4a6e-af67-729c7468a350}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.714264825a7e0521df8e71956e3e5c2c417061ede2e351a41c65e28640d9982b\"}]},\""
		"ping\":{\"ping_freshness\":\"{ed27c232-2412-437e-a484-b386be107db1}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"8460\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{8800a85e-8f21-410f-900c-f01acf4469eb}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\""
		",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable32\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{0076876e-f472-4255-8989-c5d999276a90}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto "
		"Stage3\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.9638eb258b056dff2129ae34b37d2a107e600cafb66e430f501b163e421ac1aa\"}]},\"ping\":{\"ping_freshness\":\"{6c0b8722-6c64-4cd2-990b-28a3c37c3eb1}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"817\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f/23ml/23mr:\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"Control\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{33c5dd1b-fe33-4e7e-b15e-7362aa36091d}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{53a005ee-d2d6-450b-98d7-a64f8ceb59e1}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":"
		"{\"ping_freshness\":\"{3b2ade47-f669-40b5-aee5-741bb89a75d8}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7725493ed68e793a0033e02d76eb3d72a848b9a519394d0865088d34555b6a26\"}]},\"ping\":{\"ping_freshness\":\"{5d2acd2a-c1db-4b8d-a9d3-9b48b4a96b30}\",\"rd\":6210},\"updatecheck\":{},\""
		"version\":\"3012\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:24vr:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6154,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.852751097103a93a2a6941715bb685a83b7b050a542790a382b7b62eff03a867\"}]},\"ping\":{\"ping_freshness\":\"{cfdeb0d0-0bd5-47cf-ad13-2d7b45384fd9}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2023.12.26.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\""
		",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{d6a5196f-816b-425a-945b-965423402807}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"Auto\","
		"\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ae46d431f381538b0fac6d9fc4ddd1c83253f4d720aff5bbb342cbd1da3c01a2\"}]},\"ping\":{\"ping_freshness\":\"{beac68c0-e5c3-4e46-b44d-dc4e6d419fea}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2023.12.20.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6133,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.ec1a923ba7c88a440d296dc34f14c484a4e4c5168848c3edf68f0bd13169c351\"}]},\"ping\":{\"ping_freshness\":\"{e322c2ab-7a73-4e45-9c37-382dc91b1fc2}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2024.1.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.3693\"},\"prodversion\":\"120.0.6099.130\",\"protocol\":\"3.1\",\"requestid\":\"{179a0b3f-f8e5-44f2-a3bb-171f0f8889c4}\",\"sessionid\":\"{3bb9bd46-af09-46d8-aec0-032192aca19a}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.352\"},\"updaterversion\":\"120.0.6099.130\"}}", 
		LAST);

	lr_think_time(32);

	lr_start_transaction("select FI-SW-01");

	web_url("Catalog.action_2", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=875D8E93F7B291A3022C76A5671F1BEE?viewCategory=&categoryId=FISH", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("select FI-SW-01",LR_AUTO);

	lr_think_time(36);

	lr_start_transaction("add to cart");

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t9.inf", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASGQnfh7zKjxssDxIFDQKP-2gh3cZDcNVS_yMSGQkjZ-_jGnPyeBIFDXK71t8h3cZDcNVS_yM=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("add to cart",LR_AUTO);

	lr_think_time(37);

	lr_start_transaction("proceed to cart");

	web_link("Proceed to Checkout", 
		"Text=Proceed to Checkout", 
		"Snapshot=t10.inf", 
		LAST);

	lr_end_transaction("proceed to cart",LR_AUTO);

	return 0;
}
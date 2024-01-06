Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", ENDITEM, 
		"Url=https://blazemeter.trackinglibrary.prodperfect.com/keen-tracking.min.js", ENDITEM, 
		LAST);

	lr_think_time(108);

	lr_start_transaction("source_transaction");

	lr_end_transaction("source_transaction",LR_AUTO);

	lr_start_transaction("destination_transaction");

	lr_end_transaction("destination_transaction",LR_AUTO);

	lr_start_transaction("Find Flights transaction");

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("reserve.php", 
		"Action=https://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=New York", ENDITEM, 
		LAST);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:ErraET1QGbGke31mKIdc2zQSLH0RnbzsvkILHh0njs4&cup2hreq=735e40c17dedce727bf04bc2718bf32b4c4d04b6d1ddb88c5e3ac4c1ee9cee75", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{83a619c5-f8d5-4da0-aa51-a9dfa7293c23}\",\"rd\":6210},\"updatecheck\":{},\"version\":\""
		"1.3.36.311\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{fa34a4ea-f9ff-4a76-8ada-f8069d8dd4e0}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto"
		"\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.50a410468d64fd55a0fc41dd22d574883f13386eb147b0b5b96ee66c118d4d6e\"}]},\"ping\":{\"ping_freshness\":\"{9cbc83f6-8374-4c0f-a584-c0abe50f2635}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{c7c548cf-aba2-4633-9575-7575ce5f5cda}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{fac0503b-7b50-4593-aff1-d2103e6c1334}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5818,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{cd68f5ad-7913-4008-a93b-e6e5d0bcd03d}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\""
		"ping_freshness\":\"{28053f09-5dfd-4e09-909e-ce7ab398a946}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{efbe9f36-ba57-463b-992d-a9a1cd8fc47a}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":"
		"\"1:lwl:25i9@0.1\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.23d23205a85fd30aa8d58030843cbf59c8700f1b60aaf1c5e058e574b3876c7d\"}]},\"ping\":{\"ping_freshness\":\"{dfd81f89-149a-41a4-81a5-0df1bb523fc9}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"427\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\""
		"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{3f85fdbf-df56-4c76-b7a2-e4b0ddd79a1e}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":"
		"\"{5e269798-62f8-4a9b-9600-a85c5d6f9f7e}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0166e76ef6d70642ac15d03b01fb21682c1477ca1c09b255276a3787c5caf846\"}]},\"ping\":{\"ping_freshness\":\"{f107fb3c-c812-476a-8015-5c4bc090ac6b}\",\"rd\":6210},\"updatecheck\":{},\"version\":\""
		"8462\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.9638eb258b056dff2129ae34b37d2a107e600cafb66e430f501b163e421ac1aa\"}]},\"ping\":{\"ping_freshness\":\"{01eb6dc6-08d4-431a-9c03-4c8656cfc2f4}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"817\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7725493ed68e793a0033e02d76eb3d72a848b9a519394d0865088d34555b6a26\"}]},\"ping\":{\"ping_freshness\":\"{7b884f02-3bd4-4216-93f3-1cd96d34a699}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"3012\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f/23ml/23mr:\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":"
		"\"Control\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{eb0b1d62-1e20-42ed-ba05-fad8be35130c}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable32\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":["
		"{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{ad337ea7-1742-4d86-9db5-0ef494113b91}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\""
		"ping\":{\"ping_freshness\":\"{453464b7-31e7-42bc-867e-9f0b36ec8663}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:24vr:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6154,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.852751097103a93a2a6941715bb685a83b7b050a542790a382b7b62eff03a867\"}]},\"ping\":{\"ping_freshness\":\"{585c7bc6-6452-4414-a4e3-f085e698d8fe}\",\"rd\":6210},\""
		"updatecheck\":{},\"version\":\"2023.12.26.1\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{d06061d5-42af-430c-ba7e-83290188a3bd}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\""
		"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{a22c050d-8466-4fb2-ba61-2f444d2bbefd}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\""
		"cohorthint\":\"General release\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ae46d431f381538b0fac6d9fc4ddd1c83253f4d720aff5bbb342cbd1da3c01a2\"}]},\"ping\":{\"ping_freshness\":\"{32410f4a-9403-47c6-b4f0-49715cedbd68}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2023.12.20.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6133,"
		"\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ec1a923ba7c88a440d296dc34f14c484a4e4c5168848c3edf68f0bd13169c351\"}]},\"ping\":{\"ping_freshness\":\"{1997bd97-730c-411c-8754-e8070dbd0c00}\",\"rd\":6210},\"updatecheck\":{},\"version\":\"2024.1.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch"
		"\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3693\"},\"prodversion\":\"120.0.6099.130\",\"protocol\":\"3.1\",\"requestid\":\"{053cc6a9-bfde-4d00-a129-508afc4c2770}\",\"sessionid\":\"{a870a607-9079-4440-b75f-4c9f271e8959}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.352\"},\"updaterversion\":\"120.0.6099.130\"}}", 
		LAST);

	lr_end_transaction("Find Flights transaction",LR_AUTO);

	lr_start_transaction("choose this flight transaction");

	web_add_cookie("prodperfect_session={%22session_uuid%22:%22663e4fe2-1e7b-4eb2-ad52-2b67c4c93246%22}; DOMAIN=blazedemo.com");

	web_add_cookie("keen={%22uuid%22:%22d972bf1d-91aa-4468-bf5e-9de2dd819d78%22%2C%22initialReferrer%22:%22https://blazedemo.com/%22}; DOMAIN=blazedemo.com");

	lr_think_time(27);

	web_submit_data("purchase.php", 
		"Action=https://blazedemo.com/purchase.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/reserve.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flight", "Value=43", ENDITEM, 
		"Name=price", "Value=472.56", ENDITEM, 
		"Name=airline", "Value=Virgin America", ENDITEM, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=New York", ENDITEM, 
		LAST);

	lr_end_transaction("choose this flight transaction",LR_AUTO);

	return 0;
}
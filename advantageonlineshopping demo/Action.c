Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("demouser2", 
		lr_unmask("6596e0460a4d1b42a4066d9ff611c6"), 
		"advantageonlineshopping.com:443");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=120", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t36.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

/*Correlation comment - Do not change!  Original value='UA-81334227-1' Name ='tid' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=tid",
		"RegExp=!--ga\\('create',\\ '(.*?)',\\ ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/advantageonlineshopping.com/*",
		LAST);

/*Correlation comment - Do not change!  Original value='j101' Name ='_v' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=_v",
		"RegExp=a,\"_v=(.*?)\",",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/analytics.js*",
		LAST);

	web_url("advantageonlineshopping.com", 
		"URL=https://advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/category_banner_5.png", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5900", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5800", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5505", ENDITEM, 
		"Url=/css/images/Check.png", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Bell.png", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/User.jpg", ENDITEM, 
		"Url=/css/images/Shipex.png", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=advantageonlineshopping.com");

	web_url("ALL", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect",
		"URL=https://www.google-analytics.com/j/collect?v=1&_v={_v}&a=285952135&t=pageview&_s=1&dl=https%3A%2F%2Fadvantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1366x768&vp=1366x641&je=0&_u=IEBAAEABAAAAACAAI~&jid=1885753440&gjid=688667536&cid=56093117.1704386070&tid={tid}&_gid=1368696169.1704386070&_r=1&_slc=1&z=859926269",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://advantageonlineshopping.com/",
		"Snapshot=t39.inf",
		"Mode=HTML",
		"EncType=text/plain",
		LAST);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_cookie("_ga=GA1.2.56093117.1704386070; DOMAIN=advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.1368696169.1704386070; DOMAIN=advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=advantageonlineshopping.com");

	web_url("categories", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=https://advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=https://advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(17);

	lr_start_transaction("user_transaction");

	lr_end_transaction("user_transaction",LR_AUTO);

	lr_start_transaction("login_details_transaction");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:Ii57Jp19fq_YpdHFQX0G9-dz27ApWVzHv_tiAd0ciaI&cup2hreq=30fb1f950cd05afa10b8e14cec56a1ab3b7de601e0a7851cf4ef926310959790", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{dc2bc90e-49f2-46f2-9aa9-c6136351f56e}\",\"rd\":6212},\"updatecheck\":{},\"version\":\""
		"1.3.36.311\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5818,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{797a9d5a-9821-45a0-9615-ad81b8fb1bc3}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\""
		"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{9cd6350c-cb69-4224-93c3-9cc363a5bd21}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"en-US\","
		"\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{c1d4fce6-d91f-4aa1-ab3a-0a97d5c4d249}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.50a410468d64fd55a0fc41dd22d574883f13386eb147b0b5b96ee66c118d4d6e\"}]},\"ping\":{\"ping_freshness\":\"{2794cf8e-3068-4901-b2aa-05b52bad1ae6}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:25i9@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.23d23205a85fd30aa8d58030843cbf59c8700f1b60aaf1c5e058e574b3876c7d\"}"
		"]},\"ping\":{\"ping_freshness\":\"{2af7b1fb-d3ef-43cf-91b6-174fab19c44c}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"427\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{b2e6a484-fc4b-49f8-9ad6-8de4dacb7dca}\",\"rd\":6212},\""
		"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{79efa4e4-3be7-4d50-88f2-d5804937e40e}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{7c612066-047d-4825-bd91-c3f9b537c065}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\""
		"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.aff3d2026b3b503562a64dc979205b4602dd313e30c4528c59e3dce9e4e8b50e\"}]},\"ping\":{\"ping_freshness\":\"{ff61ef78-c05d-4111-9252-262ee463dce7}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"8464\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\""
		"{e245307e-849c-4fb5-b4a6-60d8b09ec3b3}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.9638eb258b056dff2129ae34b37d2a107e600cafb66e430f501b163e421ac1aa\"}]},\"ping\":{\"ping_freshness\":\"{11cb809b-2425-4c43-89d4-6546a1d3abc3}\",\"rd\":6212},\""
		"updatecheck\":{},\"version\":\"817\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7725493ed68e793a0033e02d76eb3d72a848b9a519394d0865088d34555b6a26\"}]},\"ping\":{\"ping_freshness\":\"{912b752e-e1a1-4c15-91e7-16589568f165}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"3012\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand"
		"\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{d2bca039-1f93-4682-87aa-938167249d11}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\""
		",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{7f700c19-a3fa-436e-96f5-26309ad5c0b5}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:24vr:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6154,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.27eea7f9103464afe70f767435f76ba57ec36b60f896fcedf160aaac2a2e4b3e\"}]},\"ping\":{\"ping_freshness\":\"{2da0dcb8-302b-411c-8587-02088b4d5c2b}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"2024.1.3.1\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable32\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\""
		":{\"ping_freshness\":\"{4c05be69-c8fb-43ea-ade2-e4afb8c9967d}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{def33fa7-b106-4074-a9ce-d97e4040a4fe}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\""
		"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{82895740-248d-4fbc-b751-328eeb683896}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f/23ml"
		"/23mr:\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"Control\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{183f090b-2639-449b-ba3d-01f94aa9e395}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:25p3@0.025\",\"cohorthint\":\"General release\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ae46d431f381538b0fac6d9fc4ddd1c83253f4d720aff5bbb342cbd1da3c01a2\"}]},\"ping\":{\"ping_freshness\":\"{dcdb2b16-1d62-433e-a59e-0ea47923b15d}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"2023.12.20.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6133,\"lang\":\"en-US\",\"packages\":{\""
		"package\":[{\"fp\":\"1.b052dcc90b2eb5b223c5a6b63591cddb4c5e470ccdd968201e779dc2995c84eb\"}]},\"ping\":{\"ping_freshness\":\"{eabbab80-7175-4823-a29a-8218598a65da}\",\"rd\":6212},\"updatecheck\":{},\"version\":\"2024.1.3.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\""
		"Windows\",\"version\":\"10.0.19045.3693\"},\"prodversion\":\"120.0.6099.130\",\"protocol\":\"3.1\",\"requestid\":\"{318f0ab2-7790-48dc-819e-0b1f67827236}\",\"sessionid\":\"{2360f68e-bfa9-4d30-bb08-d46bad02f4a5}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.352\"},\"updaterversion\":\"120.0.6099.130\"}}", 
		LAST);

	lr_end_transaction("login_details_transaction",LR_AUTO);

	lr_think_time(31);

	lr_start_transaction("sign_in_transaction");

	web_custom_request("AccountLoginRequest", 
		"URL=https://advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>Demouser123</loginPassword><loginUser>demouser2</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

/*Correlation comment - Do not change!  Original value='432EB46DFCE6FD68A4FA6B8CCAFA3248' Name ='sessionId' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=sessionId",
		"RegExp=JSESSIONID=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		LAST);

	web_url("655606527", 
		"URL=https://advantageonlineshopping.com/order/api/v1/carts/655606527", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIwLjAuNjA5OS4xMzASUQkAV538LJqhZBIFDeeNQA4SBQ3OQUx6EgUNeG8SGRIFDQ8WvisSBQ2E5pjgEgUN9nKYWRIFDcd2OFASBQ1axjztEgUNcpdcLyG_nUdXxrOJoA==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("upload", 
		"URL=https://beacons.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":87446,\"request_elapsed_ms\":2599,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.googletagmanager.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":76409,\"request_elapsed_ms\""
		":411,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.googletagmanager.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	lr_end_transaction("sign_in_transaction",LR_AUTO);

	lr_think_time(14);

	lr_start_transaction("mice_transaction");

	web_url("products", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/5/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=https://advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_end_transaction("mice_transaction",LR_AUTO);

	lr_think_time(141);

	lr_start_transaction("filtering_transaction");

	lr_end_transaction("filtering_transaction",LR_AUTO);

	lr_start_transaction("select_product_transaction");

	web_url("all_data", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_url("29", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/products/29", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=https://advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("select_product_transaction",LR_AUTO);

	lr_think_time(56);

	lr_start_transaction("quantity_transaction");

	lr_end_transaction("quantity_transaction",LR_AUTO);

	lr_start_transaction("add_to_cart_transaction");

	web_submit_data("414141",
		"Action=https://advantageonlineshopping.com/order/api/v1/carts/655606527/product/29/color/414141?quantity=2",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=https://advantageonlineshopping.com/",
		"Snapshot=t55.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=sessionId", "Value={sessionId}", ENDITEM,
		LAST);

	lr_end_transaction("add_to_cart_transaction",LR_AUTO);

	lr_think_time(22);

	lr_start_transaction("click_on_cart_transaction");

	web_url("655606527_2", 
		"URL=https://advantageonlineshopping.com/order/api/v1/carts/655606527", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL=https://advantageonlineshopping.com/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("click_on_cart_transaction",LR_AUTO);

	lr_think_time(18);

	lr_start_transaction("checkout_transaction");

	web_custom_request("GetAccountByIdRequest", 
		"URL=https://advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>655606527</accountId><base64Token>Basic ZGVtb3VzZXIyOkRlbW91c2VyMTIz</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=https://advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>655606527</accountId><base64Token>Basic ZGVtb3VzZXIyOkRlbW91c2VyMTIz</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("655606527_3", 
		"URL=https://advantageonlineshopping.com/order/api/v1/carts/655606527", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("shippingcost",
		"URL=https://advantageonlineshopping.com/order/api/v1/shippingcost/",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://advantageonlineshopping.com/",
		"Snapshot=t61.inf",
		"Mode=HTML",
		"EncType=application/json;charset=UTF-8",
		"Body={\"seaddress\":{\"addressLine1\":\"abc\",\"addressLine2\":\"\",\"city\":\"hyderabad\",\"country\":\"in\",\"postalCode\":12345,\"state\":\"telangana\"},\"secustomerName\":\"user name\",\"secustomerPhone\":1234567890,\"senumberOfProducts\":2,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"{sessionId}\"}",
		LAST);

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=https://advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>655606527</accountId><base64Token>Basic ZGVtb3VzZXIyOkRlbW91c2VyMTIz</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("orderPayment-page.html", 
		"URL=https://advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("GetCountriesRequest", 
		"URL=https://advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("checkout_transaction",LR_AUTO);

	lr_think_time(91);

	lr_start_transaction("shipping_details_transaction");

	lr_end_transaction("shipping_details_transaction",LR_AUTO);

	lr_start_transaction("payment_info_transaction");

	lr_end_transaction("payment_info_transaction",LR_AUTO);

	lr_start_transaction("pay_now_transaction");

	web_custom_request("UpdateSafePayMethodRequest", 
		"URL=https://advantageonlineshopping.com/accountservice/ws/UpdateSafePayMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><UpdateSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><userId>655606527</userId><safePayUsername>demouser123</safePayUsername><safePayPassword>Demosuser1</safePayPassword><referenceId>1234567890</referenceId><base64Token>Basic "
		"ZGVtb3VzZXIyOkRlbW91c2VyMTIz</base64Token></UpdateSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("655606527_4", 
		"URL=https://advantageonlineshopping.com/order/api/v1/orders/users/655606527", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":1234567890,\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"Demosuser1\",\""
		"Transaction_SafePay_UserName\":\"demouser123\",\"Transaction_TransactionDate\":\"4012024\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"abc\",\"Shipping_Address_City\":\"hyderabad\",\"Shipping_Address_CountryCode\":92,\"Shipping_Address_CustomerName\":\"user name\",\"Shipping_Address_CustomerPhone\":1234567890,\"Shipping_Address_PostalCode\":12345,\"Shipping_Address_State\":\"telangana\",\"Shipping_Cost\":19.98,\"Shipping_NumberOfProducts\":2,\""
		"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"414141\",\"productId\":29,\"quantity\":2,\"hasWarranty\":false}]}", 
		LAST);

	web_custom_request("655606527_5", 
		"URL=https://advantageonlineshopping.com/order/api/v1/carts/655606527", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("pay_now_transaction",LR_AUTO);

	lr_start_transaction("close_transaction");

	lr_end_transaction("close_transaction",LR_AUTO);

	return 0;
}
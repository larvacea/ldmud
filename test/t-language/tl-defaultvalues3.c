/* Test default values for functions.
 *
 * Here we check an out of bounds error. We create as
 * many function entries to get to the end of the initial
 * memory block for them. Any additional entry then needs
 * to increase the memory block. A failure to do so will
 * show up in valgrind and possibly crash.
 */

#include "/inc/msg.inc"

void fill001() {}
void fill002() {}
void fill003() {}
void fill004() {}
void fill005() {}
void fill006() {}
void fill007() {}
void fill008() {}
void fill009() {}
void fill010() {}
void fill011() {}
void fill012() {}
void fill013() {}
void fill014() {}
void fill015() {}
void fill016() {}
void fill017() {}
void fill018() {}
void fill019() {}
void fill020() {}
void fill021() {}
void fill022() {}
void fill023() {}
void fill024() {}
void fill025() {}
void fill026() {}
void fill027() {}
void fill028() {}
void fill029() {}
void fill030() {}
void fill031() {}
void fill032() {}
void fill033() {}
void fill034() {}
void fill035() {}
void fill036() {}
void fill037() {}
void fill038() {}
void fill039() {}
void fill040() {}
void fill041() {}
void fill042() {}
void fill043() {}
void fill044() {}
void fill045() {}
void fill046() {}
void fill047() {}
void fill048() {}
void fill049() {}
void fill050() {}
void fill051() {}
void fill052() {}
void fill053() {}
void fill054() {}
void fill055() {}
void fill056() {}
void fill057() {}
void fill058() {}
void fill059() {}
void fill060() {}
void fill061() {}
void fill062() {}
void fill063() {}
void fill064() {}
void fill065() {}
void fill066() {}
void fill067() {}
void fill068() {}
void fill069() {}
void fill070() {}
void fill071() {}
void fill072() {}
void fill073() {}
void fill074() {}
void fill075() {}
void fill076() {}
void fill077() {}
void fill078() {}
void fill079() {}
void fill080() {}
void fill081() {}
void fill082() {}
void fill083() {}
void fill084() {}
void fill085() {}
void fill086() {}
void fill087() {}
void fill088() {}
void fill089() {}
void fill090() {}
void fill091() {}
void fill092() {}
void fill093() {}
void fill094() {}
void fill095() {}
void fill096() {}
void fill097() {}
void fill098() {}
void fill099() {}
void fill100() {}
void fill101() {}
void fill102() {}
void fill103() {}
void fill104() {}
void fill105() {}
void fill106() {}
void fill107() {}
void fill108() {}
void fill109() {}
void fill110() {}
void fill111() {}
void fill112() {}
void fill113() {}
void fill114() {}
void fill115() {}
void fill116() {}
void fill117() {}
void fill118() {}
void fill119() {}
void fill120() {}
void fill121() {}
void fill122() {}
void fill123() {}
void fill124() {}
void fill125() {}
void fill126() {}
void fill127() {}
void fill128() {}
void fill129() {}
void fill130() {}
void fill131() {}
void fill132() {}
void fill133() {}
void fill134() {}
void fill135() {}
void fill136() {}
void fill137() {}
void fill138() {}
void fill139() {}
void fill140() {}
void fill141() {}
void fill142() {}
void fill143() {}
void fill144() {}
void fill145() {}
void fill146() {}
void fill147() {}
void fill148() {}
void fill149() {}
void fill150() {}
void fill151() {}
void fill152() {}
void fill153() {}
void fill154() {}
void fill155() {}
void fill156() {}
void fill157() {}
void fill158() {}
void fill159() {}
void fill160() {}
void fill161() {}
void fill162() {}
void fill163() {}
void fill164() {}
void fill165() {}
void fill166() {}
void fill167() {}
void fill168() {}
void fill169() {}
void fill170() {}
void fill171() {}
void fill172() {}
void fill173() {}
void fill174() {}
void fill175() {}
void fill176() {}
void fill177() {}
void fill178() {}
void fill179() {}
void fill180() {}
void fill181() {}
void fill182() {}
void fill183() {}
void fill184() {}
void fill185() {}
void fill186() {}
void fill187() {}
void fill188() {}
void fill189() {}
void fill190() {}
void fill191() {}
void fill192() {}
void fill193() {}
void fill194() {}
void fill195() {}
void fill196() {}
void fill197() {}
void fill198() {}
void fill199() {}
void fill200() {}
void fill201() {}
void fill202() {}
void fill203() {}
void fill204() {}
void fill205() {}
void fill206() {}
void fill207() {}
void fill208() {}
void fill209() {}
void fill210() {}
void fill211() {}
void fill212() {}
void fill213() {}
void fill214() {}
void fill215() {}
void fill216() {}
void fill217() {}
void fill218() {}
void fill219() {}
void fill220() {}
void fill221() {}
void fill222() {}
void fill223() {}
void fill224() {}
void fill225() {}
void fill226() {}
void fill227() {}
void fill228() {}
void fill229() {}
void fill230() {}
void fill231() {}
void fill232() {}
void fill233() {}
void fill234() {}
void fill235() {}
void fill236() {}
void fill237() {}
void fill238() {}
void fill239() {}
void fill240() {}
void fill241() {}
void fill242() {}
void fill243() {}
void fill244() {}
void fill245() {}
void fill246() {}
void fill247() {}
void fill248() {}
void fill249() {}
void fill250() {}
void fill251() {}
void fill252() {}
void fill253() {}
void fill254() {}
#if __INT_MAX__ == 2147483647
void fill255() {}
void fill256() {}
void fill257() {}
void fill258() {}
void fill259() {}
void fill260() {}
void fill261() {}
void fill262() {}
void fill263() {}
void fill264() {}
void fill265() {}
void fill266() {}
void fill267() {}
void fill268() {}
void fill269() {}
void fill270() {}
void fill271() {}
void fill272() {}
void fill273() {}
void fill274() {}
void fill275() {}
void fill276() {}
void fill277() {}
void fill278() {}
void fill279() {}
void fill280() {}
void fill281() {}
void fill282() {}
void fill283() {}
void fill284() {}
void fill285() {}
void fill286() {}
void fill287() {}
void fill288() {}
void fill289() {}
void fill290() {}
void fill291() {}
void fill292() {}
void fill293() {}
void fill294() {}
void fill295() {}
void fill296() {}
void fill297() {}
void fill298() {}
void fill299() {}
void fill300() {}
void fill301() {}
void fill302() {}
void fill303() {}
void fill304() {}
void fill305() {}
void fill306() {}
void fill307() {}
void fill308() {}
void fill309() {}
void fill310() {}
void fill311() {}
void fill312() {}
void fill313() {}
void fill314() {}
void fill315() {}
void fill316() {}
void fill317() {}
void fill318() {}
void fill319() {}
void fill320() {}
void fill321() {}
void fill322() {}
void fill323() {}
void fill324() {}
void fill325() {}
void fill326() {}
void fill327() {}
void fill328() {}
void fill329() {}
void fill330() {}
void fill331() {}
void fill332() {}
void fill333() {}
void fill334() {}
void fill335() {}
void fill336() {}
void fill337() {}
void fill338() {}
void fill339() {}
void fill340() {}
void fill341() {}
void fill342() {}
void fill343() {}
void fill344() {}
void fill345() {}
void fill346() {}
void fill347() {}
void fill348() {}
void fill349() {}
void fill350() {}
void fill351() {}
void fill352() {}
void fill353() {}
void fill354() {}
void fill355() {}
void fill356() {}
void fill357() {}
void fill358() {}
void fill359() {}
void fill360() {}
void fill361() {}
void fill362() {}
void fill363() {}
void fill364() {}
void fill365() {}
void fill366() {}
void fill367() {}
void fill368() {}
void fill369() {}
void fill370() {}
void fill371() {}
void fill372() {}
void fill373() {}
void fill374() {}
void fill375() {}
void fill376() {}
void fill377() {}
void fill378() {}
void fill379() {}
void fill380() {}
void fill381() {}
void fill382() {}
void fill383() {}
void fill384() {}
void fill385() {}
void fill386() {}
void fill387() {}
void fill388() {}
void fill389() {}
void fill390() {}
void fill391() {}
void fill392() {}
void fill393() {}
void fill394() {}
void fill395() {}
void fill396() {}
void fill397() {}
void fill398() {}
void fill399() {}
void fill400() {}
void fill401() {}
void fill402() {}
void fill403() {}
void fill404() {}
void fill405() {}
void fill406() {}
void fill407() {}
void fill408() {}
void fill409() {}
void fill410() {}
void fill411() {}
void fill412() {}
void fill413() {}
void fill414() {}
void fill415() {}
void fill416() {}
void fill417() {}
void fill418() {}
void fill419() {}
void fill420() {}
void fill421() {}
void fill422() {}
void fill423() {}
void fill424() {}
void fill425() {}
void fill426() {}
void fill427() {}
void fill428() {}
void fill429() {}
void fill430() {}
void fill431() {}
void fill432() {}
void fill433() {}
void fill434() {}
void fill435() {}
void fill436() {}
void fill437() {}
void fill438() {}
void fill439() {}
void fill440() {}
void fill441() {}
void fill442() {}
void fill443() {}
void fill444() {}
void fill445() {}
void fill446() {}
void fill447() {}
void fill448() {}
void fill449() {}
void fill450() {}
void fill451() {}
void fill452() {}
void fill453() {}
void fill454() {}
void fill455() {}
void fill456() {}
void fill457() {}
void fill458() {}
void fill459() {}
void fill460() {}
void fill461() {}
void fill462() {}
void fill463() {}
void fill464() {}
void fill465() {}
void fill466() {}
void fill467() {}
void fill468() {}
void fill469() {}
void fill470() {}
void fill471() {}
void fill472() {}
void fill473() {}
void fill474() {}
void fill475() {}
void fill476() {}
void fill477() {}
void fill478() {}
void fill479() {}
void fill480() {}
void fill481() {}
void fill482() {}
void fill483() {}
void fill484() {}
void fill485() {}
void fill486() {}
void fill487() {}
void fill488() {}
void fill489() {}
void fill490() {}
void fill491() {}
void fill492() {}
void fill493() {}
void fill494() {}
void fill495() {}
void fill496() {}
void fill497() {}
void fill498() {}
void fill499() {}
void fill500() {}
void fill501() {}
void fill502() {}
void fill503() {}
void fill504() {}
void fill505() {}
void fill506() {}
void fill507() {}
void fill508() {}
void fill509() {}
void fill510() {}
#endif

int fun1(int a = 10);
int fun2(int a = 20);
int fun3(int a = 30);
int fun4(int a = 40);
int fun1(int a) { return a; }
int fun2(int a) { return a; }
int fun3(int a) { return a; }
int fun4(int a) { return a; }

int run_test()
{
    return fun1() == 10 && fun2() == 20 && fun3() == 30 && fun4() == 40;
}

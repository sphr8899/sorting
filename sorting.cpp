#include<stdio.h>
#include<stdlib.h>

static int a[333335]; //=1.27MB
char input[100];

//function permulation 
void swap(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
}

void print(){
	int i;
	FILE*f=fopen("output.txt","r");
	for(i=0;i<1000;i++){
	fscanf(f,"%d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  ",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10],&a[11],&a[12],&a[13],&a[14],&a[15],&a[16],&a[17],&a[18],&a[19],&a[20],&a[21],&a[22],&a[23],&a[24],&a[25],&a[26],&a[27],&a[28],&a[29],&a[30],&a[31],&a[32],&a[33],&a[34],&a[35],&a[36],&a[37],&a[38],&a[39],&a[40],&a[41],&a[42],&a[43],&a[44],&a[45],&a[46],&a[47],&a[48],&a[49],&a[50],&a[51],&a[52],&a[53],&a[54],&a[55],&a[56],&a[57],&a[58],&a[59],&a[60],&a[61],&a[62],&a[63],&a[64],&a[65],&a[66],&a[67],&a[68],&a[69],&a[70],&a[71],&a[72],&a[73],&a[74],&a[75],&a[76],&a[77],&a[78],&a[79],&a[80],&a[81],&a[82],&a[83],&a[84],&a[85],&a[86],&a[87],&a[88],&a[89],&a[90],&a[91],&a[92],&a[93],&a[94],&a[95],&a[96],&a[97],&a[98],&a[99],&a[100],&a[101],&a[102],&a[103],&a[104],&a[105],&a[106],&a[107],&a[108],&a[109],&a[110],&a[111],&a[112],&a[113],&a[114],&a[115],&a[116],&a[117],&a[118],&a[119],&a[120],&a[121],&a[122],&a[123],&a[124],&a[125],&a[126],&a[127],&a[128],&a[129],&a[130],&a[131],&a[132],&a[133],&a[134],&a[135],&a[136],&a[137],&a[138],&a[139],&a[140],&a[141],&a[142],&a[143],&a[144],&a[145],&a[146],&a[147],&a[148],&a[149],&a[150],&a[151],&a[152],&a[153],&a[154],&a[155],&a[156],&a[157],&a[158],&a[159],&a[160],&a[161],&a[162],&a[163],&a[164],&a[165],&a[166],&a[167],&a[168],&a[169],&a[170],&a[171],&a[172],&a[173],&a[174],&a[175],&a[176],&a[177],&a[178],&a[179],&a[180],&a[181],&a[182],&a[183],&a[184],&a[185],&a[186],&a[187],&a[188],&a[189],&a[190],&a[191],&a[192],&a[193],&a[194],&a[195],&a[196],&a[197],&a[198],&a[199],&a[200],&a[201],&a[202],&a[203],&a[204],&a[205],&a[206],&a[207],&a[208],&a[209],&a[210],&a[211],&a[212],&a[213],&a[214],&a[215],&a[216],&a[217],&a[218],&a[219],&a[220],&a[221],&a[222],&a[223],&a[224],&a[225],&a[226],&a[227],&a[228],&a[229],&a[230],&a[231],&a[232],&a[233],&a[234],&a[235],&a[236],&a[237],&a[238],&a[239],&a[240],&a[241],&a[242],&a[243],&a[244],&a[245],&a[246],&a[247],&a[248],&a[249],&a[250],&a[251],&a[252],&a[253],&a[254],&a[255],&a[256],&a[257],&a[258],&a[259],&a[260],&a[261],&a[262],&a[263],&a[264],&a[265],&a[266],&a[267],&a[268],&a[269],&a[270],&a[271],&a[272],&a[273],&a[274],&a[275],&a[276],&a[277],&a[278],&a[279],&a[280],&a[281],&a[282],&a[283],&a[284],&a[285],&a[286],&a[287],&a[288],&a[289],&a[290],&a[291],&a[292],&a[293],&a[294],&a[295],&a[296],&a[297],&a[298],&a[299],&a[300],&a[301],&a[302],&a[303],&a[304],&a[305],&a[306],&a[307],&a[308],&a[309],&a[310],&a[311],&a[312],&a[313],&a[314],&a[315],&a[316],&a[317],&a[318],&a[319],&a[320],&a[321],&a[322],&a[323],&a[324],&a[325],&a[326],&a[327],&a[328],&a[329],&a[330],&a[331],&a[332],&a[333],&a[334],&a[335],&a[336],&a[337],&a[338],&a[339],&a[340],&a[341],&a[342],&a[343],&a[344],&a[345],&a[346],&a[347],&a[348],&a[349],&a[350],&a[351],&a[352],&a[353],&a[354],&a[355],&a[356],&a[357],&a[358],&a[359],&a[360],&a[361],&a[362],&a[363],&a[364],&a[365],&a[366],&a[367],&a[368],&a[369],&a[370],&a[371],&a[372],&a[373],&a[374],&a[375],&a[376],&a[377],&a[378],&a[379],&a[380],&a[381],&a[382],&a[383],&a[384],&a[385],&a[386],&a[387],&a[388],&a[389],&a[390],&a[391],&a[392],&a[393],&a[394],&a[395],&a[396],&a[397],&a[398],&a[399],&a[400],&a[401],&a[402],&a[403],&a[404],&a[405],&a[406],&a[407],&a[408],&a[409],&a[410],&a[411],&a[412],&a[413],&a[414],&a[415],&a[416],&a[417],&a[418],&a[419],&a[420],&a[421],&a[422],&a[423],&a[424],&a[425],&a[426],&a[427],&a[428],&a[429],&a[430],&a[431],&a[432],&a[433],&a[434],&a[435],&a[436],&a[437],&a[438],&a[439],&a[440],&a[441],&a[442],&a[443],&a[444],&a[445],&a[446],&a[447],&a[448],&a[449],&a[450],&a[451],&a[452],&a[453],&a[454],&a[455],&a[456],&a[457],&a[458],&a[459],&a[460],&a[461],&a[462],&a[463],&a[464],&a[465],&a[466],&a[467],&a[468],&a[469],&a[470],&a[471],&a[472],&a[473],&a[474],&a[475],&a[476],&a[477],&a[478],&a[479],&a[480],&a[481],&a[482],&a[483],&a[484],&a[485],&a[486],&a[487],&a[488],&a[489],&a[490],&a[491],&a[492],&a[493],&a[494],&a[495],&a[496],&a[497],&a[498],&a[499],&a[500],&a[501],&a[502],&a[503],&a[504],&a[505],&a[506],&a[507],&a[508],&a[509],&a[510],&a[511],&a[512],&a[513],&a[514],&a[515],&a[516],&a[517],&a[518],&a[519],&a[520],&a[521],&a[522],&a[523],&a[524],&a[525],&a[526],&a[527],&a[528],&a[529],&a[530],&a[531],&a[532],&a[533],&a[534],&a[535],&a[536],&a[537],&a[538],&a[539],&a[540],&a[541],&a[542],&a[543],&a[544],&a[545],&a[546],&a[547],&a[548],&a[549],&a[550],&a[551],&a[552],&a[553],&a[554],&a[555],&a[556],&a[557],&a[558],&a[559],&a[560],&a[561],&a[562],&a[563],&a[564],&a[565],&a[566],&a[567],&a[568],&a[569],&a[570],&a[571],&a[572],&a[573],&a[574],&a[575],&a[576],&a[577],&a[578],&a[579],&a[580],&a[581],&a[582],&a[583],&a[584],&a[585],&a[586],&a[587],&a[588],&a[589],&a[590],&a[591],&a[592],&a[593],&a[594],&a[595],&a[596],&a[597],&a[598],&a[599],&a[600],&a[601],&a[602],&a[603],&a[604],&a[605],&a[606],&a[607],&a[608],&a[609],&a[610],&a[611],&a[612],&a[613],&a[614],&a[615],&a[616],&a[617],&a[618],&a[619],&a[620],&a[621],&a[622],&a[623],&a[624],&a[625],&a[626],&a[627],&a[628],&a[629],&a[630],&a[631],&a[632],&a[633],&a[634],&a[635],&a[636],&a[637],&a[638],&a[639],&a[640],&a[641],&a[642],&a[643],&a[644],&a[645],&a[646],&a[647],&a[648],&a[649],&a[650],&a[651],&a[652],&a[653],&a[654],&a[655],&a[656],&a[657],&a[658],&a[659],&a[660],&a[661],&a[662],&a[663],&a[664],&a[665],&a[666],&a[667],&a[668],&a[669],&a[670],&a[671],&a[672],&a[673],&a[674],&a[675],&a[676],&a[677],&a[678],&a[679],&a[680],&a[681],&a[682],&a[683],&a[684],&a[685],&a[686],&a[687],&a[688],&a[689],&a[690],&a[691],&a[692],&a[693],&a[694],&a[695],&a[696],&a[697],&a[698],&a[699],&a[700],&a[701],&a[702],&a[703],&a[704],&a[705],&a[706],&a[707],&a[708],&a[709],&a[710],&a[711],&a[712],&a[713],&a[714],&a[715],&a[716],&a[717],&a[718],&a[719],&a[720],&a[721],&a[722],&a[723],&a[724],&a[725],&a[726],&a[727],&a[728],&a[729],&a[730],&a[731],&a[732],&a[733],&a[734],&a[735],&a[736],&a[737],&a[738],&a[739],&a[740],&a[741],&a[742],&a[743],&a[744],&a[745],&a[746],&a[747],&a[748],&a[749],&a[750],&a[751],&a[752],&a[753],&a[754],&a[755],&a[756],&a[757],&a[758],&a[759],&a[760],&a[761],&a[762],&a[763],&a[764],&a[765],&a[766],&a[767],&a[768],&a[769],&a[770],&a[771],&a[772],&a[773],&a[774],&a[775],&a[776],&a[777],&a[778],&a[779],&a[780],&a[781],&a[782],&a[783],&a[784],&a[785],&a[786],&a[787],&a[788],&a[789],&a[790],&a[791],&a[792],&a[793],&a[794],&a[795],&a[796],&a[797],&a[798],&a[799],&a[800],&a[801],&a[802],&a[803],&a[804],&a[805],&a[806],&a[807],&a[808],&a[809],&a[810],&a[811],&a[812],&a[813],&a[814],&a[815],&a[816],&a[817],&a[818],&a[819],&a[820],&a[821],&a[822],&a[823],&a[824],&a[825],&a[826],&a[827],&a[828],&a[829],&a[830],&a[831],&a[832],&a[833],&a[834],&a[835],&a[836],&a[837],&a[838],&a[839],&a[840],&a[841],&a[842],&a[843],&a[844],&a[845],&a[846],&a[847],&a[848],&a[849],&a[850],&a[851],&a[852],&a[853],&a[854],&a[855],&a[856],&a[857],&a[858],&a[859],&a[860],&a[861],&a[862],&a[863],&a[864],&a[865],&a[866],&a[867],&a[868],&a[869],&a[870],&a[871],&a[872],&a[873],&a[874],&a[875],&a[876],&a[877],&a[878],&a[879],&a[880],&a[881],&a[882],&a[883],&a[884],&a[885],&a[886],&a[887],&a[888],&a[889],&a[890],&a[891],&a[892],&a[893],&a[894],&a[895],&a[896],&a[897],&a[898],&a[899],&a[900],&a[901],&a[902],&a[903],&a[904],&a[905],&a[906],&a[907],&a[908],&a[909],&a[910],&a[911],&a[912],&a[913],&a[914],&a[915],&a[916],&a[917],&a[918],&a[919],&a[920],&a[921],&a[922],&a[923],&a[924],&a[925],&a[926],&a[927],&a[928],&a[929],&a[930],&a[931],&a[932],&a[933],&a[934],&a[935],&a[936],&a[937],&a[938],&a[939],&a[940],&a[941],&a[942],&a[943],&a[944],&a[945],&a[946],&a[947],&a[948],&a[949],&a[950],&a[951],&a[952],&a[953],&a[954],&a[955],&a[956],&a[957],&a[958],&a[959],&a[960],&a[961],&a[962],&a[963],&a[964],&a[965],&a[966],&a[967],&a[968],&a[969],&a[970],&a[971],&a[972],&a[973],&a[974],&a[975],&a[976],&a[977],&a[978],&a[979],&a[980],&a[981],&a[982],&a[983],&a[984],&a[985],&a[986],&a[987],&a[988],&a[989],&a[990],&a[991],&a[992],&a[993],&a[994],&a[995],&a[996],&a[997],&a[998],&a[999],&a[1000]);
	printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  ",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14],a[15],a[16],a[17],a[18],a[19],a[20],a[21],a[22],a[23],a[24],a[25],a[26],a[27],a[28],a[29],a[30],a[31],a[32],a[33],a[34],a[35],a[36],a[37],a[38],a[39],a[40],a[41],a[42],a[43],a[44],a[45],a[46],a[47],a[48],a[49],a[50],a[51],a[52],a[53],a[54],a[55],a[56],a[57],a[58],a[59],a[60],a[61],a[62],a[63],a[64],a[65],a[66],a[67],a[68],a[69],a[70],a[71],a[72],a[73],a[74],a[75],a[76],a[77],a[78],a[79],a[80],a[81],a[82],a[83],a[84],a[85],a[86],a[87],a[88],a[89],a[90],a[91],a[92],a[93],a[94],a[95],a[96],a[97],a[98],a[99],a[100],a[101],a[102],a[103],a[104],a[105],a[106],a[107],a[108],a[109],a[110],a[111],a[112],a[113],a[114],a[115],a[116],a[117],a[118],a[119],a[120],a[121],a[122],a[123],a[124],a[125],a[126],a[127],a[128],a[129],a[130],a[131],a[132],a[133],a[134],a[135],a[136],a[137],a[138],a[139],a[140],a[141],a[142],a[143],a[144],a[145],a[146],a[147],a[148],a[149],a[150],a[151],a[152],a[153],a[154],a[155],a[156],a[157],a[158],a[159],a[160],a[161],a[162],a[163],a[164],a[165],a[166],a[167],a[168],a[169],a[170],a[171],a[172],a[173],a[174],a[175],a[176],a[177],a[178],a[179],a[180],a[181],a[182],a[183],a[184],a[185],a[186],a[187],a[188],a[189],a[190],a[191],a[192],a[193],a[194],a[195],a[196],a[197],a[198],a[199],a[200],a[201],a[202],a[203],a[204],a[205],a[206],a[207],a[208],a[209],a[210],a[211],a[212],a[213],a[214],a[215],a[216],a[217],a[218],a[219],a[220],a[221],a[222],a[223],a[224],a[225],a[226],a[227],a[228],a[229],a[230],a[231],a[232],a[233],a[234],a[235],a[236],a[237],a[238],a[239],a[240],a[241],a[242],a[243],a[244],a[245],a[246],a[247],a[248],a[249],a[250],a[251],a[252],a[253],a[254],a[255],a[256],a[257],a[258],a[259],a[260],a[261],a[262],a[263],a[264],a[265],a[266],a[267],a[268],a[269],a[270],a[271],a[272],a[273],a[274],a[275],a[276],a[277],a[278],a[279],a[280],a[281],a[282],a[283],a[284],a[285],a[286],a[287],a[288],a[289],a[290],a[291],a[292],a[293],a[294],a[295],a[296],a[297],a[298],a[299],a[300],a[301],a[302],a[303],a[304],a[305],a[306],a[307],a[308],a[309],a[310],a[311],a[312],a[313],a[314],a[315],a[316],a[317],a[318],a[319],a[320],a[321],a[322],a[323],a[324],a[325],a[326],a[327],a[328],a[329],a[330],a[331],a[332],a[333],a[334],a[335],a[336],a[337],a[338],a[339],a[340],a[341],a[342],a[343],a[344],a[345],a[346],a[347],a[348],a[349],a[350],a[351],a[352],a[353],a[354],a[355],a[356],a[357],a[358],a[359],a[360],a[361],a[362],a[363],a[364],a[365],a[366],a[367],a[368],a[369],a[370],a[371],a[372],a[373],a[374],a[375],a[376],a[377],a[378],a[379],a[380],a[381],a[382],a[383],a[384],a[385],a[386],a[387],a[388],a[389],a[390],a[391],a[392],a[393],a[394],a[395],a[396],a[397],a[398],a[399],a[400],a[401],a[402],a[403],a[404],a[405],a[406],a[407],a[408],a[409],a[410],a[411],a[412],a[413],a[414],a[415],a[416],a[417],a[418],a[419],a[420],a[421],a[422],a[423],a[424],a[425],a[426],a[427],a[428],a[429],a[430],a[431],a[432],a[433],a[434],a[435],a[436],a[437],a[438],a[439],a[440],a[441],a[442],a[443],a[444],a[445],a[446],a[447],a[448],a[449],a[450],a[451],a[452],a[453],a[454],a[455],a[456],a[457],a[458],a[459],a[460],a[461],a[462],a[463],a[464],a[465],a[466],a[467],a[468],a[469],a[470],a[471],a[472],a[473],a[474],a[475],a[476],a[477],a[478],a[479],a[480],a[481],a[482],a[483],a[484],a[485],a[486],a[487],a[488],a[489],a[490],a[491],a[492],a[493],a[494],a[495],a[496],a[497],a[498],a[499],a[500],a[501],a[502],a[503],a[504],a[505],a[506],a[507],a[508],a[509],a[510],a[511],a[512],a[513],a[514],a[515],a[516],a[517],a[518],a[519],a[520],a[521],a[522],a[523],a[524],a[525],a[526],a[527],a[528],a[529],a[530],a[531],a[532],a[533],a[534],a[535],a[536],a[537],a[538],a[539],a[540],a[541],a[542],a[543],a[544],a[545],a[546],a[547],a[548],a[549],a[550],a[551],a[552],a[553],a[554],a[555],a[556],a[557],a[558],a[559],a[560],a[561],a[562],a[563],a[564],a[565],a[566],a[567],a[568],a[569],a[570],a[571],a[572],a[573],a[574],a[575],a[576],a[577],a[578],a[579],a[580],a[581],a[582],a[583],a[584],a[585],a[586],a[587],a[588],a[589],a[590],a[591],a[592],a[593],a[594],a[595],a[596],a[597],a[598],a[599],a[600],a[601],a[602],a[603],a[604],a[605],a[606],a[607],a[608],a[609],a[610],a[611],a[612],a[613],a[614],a[615],a[616],a[617],a[618],a[619],a[620],a[621],a[622],a[623],a[624],a[625],a[626],a[627],a[628],a[629],a[630],a[631],a[632],a[633],a[634],a[635],a[636],a[637],a[638],a[639],a[640],a[641],a[642],a[643],a[644],a[645],a[646],a[647],a[648],a[649],a[650],a[651],a[652],a[653],a[654],a[655],a[656],a[657],a[658],a[659],a[660],a[661],a[662],a[663],a[664],a[665],a[666],a[667],a[668],a[669],a[670],a[671],a[672],a[673],a[674],a[675],a[676],a[677],a[678],a[679],a[680],a[681],a[682],a[683],a[684],a[685],a[686],a[687],a[688],a[689],a[690],a[691],a[692],a[693],a[694],a[695],a[696],a[697],a[698],a[699],a[700],a[701],a[702],a[703],a[704],a[705],a[706],a[707],a[708],a[709],a[710],a[711],a[712],a[713],a[714],a[715],a[716],a[717],a[718],a[719],a[720],a[721],a[722],a[723],a[724],a[725],a[726],a[727],a[728],a[729],a[730],a[731],a[732],a[733],a[734],a[735],a[736],a[737],a[738],a[739],a[740],a[741],a[742],a[743],a[744],a[745],a[746],a[747],a[748],a[749],a[750],a[751],a[752],a[753],a[754],a[755],a[756],a[757],a[758],a[759],a[760],a[761],a[762],a[763],a[764],a[765],a[766],a[767],a[768],a[769],a[770],a[771],a[772],a[773],a[774],a[775],a[776],a[777],a[778],a[779],a[780],a[781],a[782],a[783],a[784],a[785],a[786],a[787],a[788],a[789],a[790],a[791],a[792],a[793],a[794],a[795],a[796],a[797],a[798],a[799],a[800],a[801],a[802],a[803],a[804],a[805],a[806],a[807],a[808],a[809],a[810],a[811],a[812],a[813],a[814],a[815],a[816],a[817],a[818],a[819],a[820],a[821],a[822],a[823],a[824],a[825],a[826],a[827],a[828],a[829],a[830],a[831],a[832],a[833],a[834],a[835],a[836],a[837],a[838],a[839],a[840],a[841],a[842],a[843],a[844],a[845],a[846],a[847],a[848],a[849],a[850],a[851],a[852],a[853],a[854],a[855],a[856],a[857],a[858],a[859],a[860],a[861],a[862],a[863],a[864],a[865],a[866],a[867],a[868],a[869],a[870],a[871],a[872],a[873],a[874],a[875],a[876],a[877],a[878],a[879],a[880],a[881],a[882],a[883],a[884],a[885],a[886],a[887],a[888],a[889],a[890],a[891],a[892],a[893],a[894],a[895],a[896],a[897],a[898],a[899],a[900],a[901],a[902],a[903],a[904],a[905],a[906],a[907],a[908],a[909],a[910],a[911],a[912],a[913],a[914],a[915],a[916],a[917],a[918],a[919],a[920],a[921],a[922],a[923],a[924],a[925],a[926],a[927],a[928],a[929],a[930],a[931],a[932],a[933],a[934],a[935],a[936],a[937],a[938],a[939],a[940],a[941],a[942],a[943],a[944],a[945],a[946],a[947],a[948],a[949],a[950],a[951],a[952],a[953],a[954],a[955],a[956],a[957],a[958],a[959],a[960],a[961],a[962],a[963],a[964],a[965],a[966],a[967],a[968],a[969],a[970],a[971],a[972],a[973],a[974],a[975],a[976],a[977],a[978],a[979],a[980],a[981],a[982],a[983],a[984],a[985],a[986],a[987],a[988],a[989],a[990],a[991],a[992],a[993],a[994],a[995],a[996],a[997],a[998],a[999],a[1000]);
	}
	fclose(f);
}

//partitition
int partition(int*a,int L,int R){
	int i,j,p;
	i=L;j=R+1;p=a[L];
	while(i<j){
		i++;
		while((i<=R)&&a[i]<p) i++;
		j--;
		while((j>=L)&&a[j]>p) j--;
		swap(a[i],a[j]);
	}
	swap(a[i],a[j]);
	swap(a[j],a[L]);
	return j;
}

//function quicksort
void quicksort(int*a,int L,int R){
	int p;
	if(L<R){
		p=partition(a,L,R);
		if(L<p)quicksort(a,L,p-1);
		if(R>p)quicksort(a,p+1,R);
	}
}

//merge two file is sorted into one file is sorted
void merge(char sorting1[100],char sorting2[100] ){
	int j,i=0;
	FILE*f1=fopen(sorting1,"r");
	FILE*f2=fopen(sorting2,"w");
	fscanf(f1,"%d",&j);
	while( i<333333 && ( !feof(f1) ) ){
		if(j<a[i]){
			fprintf(f2,"%d  ",j);
			fscanf(f1,"%d",&j);
		}
		else {
			fprintf(f2,"%d  ",a[i]);
			i++;
		}
	}
	while(i<333333){
			fprintf(f2,"%d  ",a[i]);
			i++;
	}
	while(!feof(f1)){
			fprintf(f2,"%d  ",j);
			fscanf(f1,"%d",&j);
	}
	fclose(f1);
	fclose(f2);
	printf("chuong trinh da chay xong \n");
}

//hanling and write result to output.txt file
void makeoutput(){
	int i;
	FILE*f=fopen(input,"r");
	
	for(i=0;i<333334;i++) 
	fscanf(f,"%d",&a[i]);
	
	quicksort(a,0,333333);
	
	FILE *f2=fopen("sorting1.txt","w");
	for(i=0;i<333334;i++) 
	fprintf(f2,"%d  ",a[i]);
	fclose(f2);
	
	for(i=0;i<333333;i++) 
	fscanf(f,"%d",&a[i]);
	quicksort(a,0,333332);	
	merge("sorting1.txt","sorting2.txt");
		
	for(i=0;i<333333;i++) 
	fscanf(f,"%d",&a[i]);	
	quicksort(a,0,333332);
	merge("sorting2.txt","output.txt");
	fclose(f);
}


main(){

while(1){
	printf("enter input: ");
	gets(input);
	FILE*f=fopen(input,"r");
	if(f) break;
	else printf("file does not exist,please try again "); 
	fclose(f);
}

	makeoutput();
	print();
}

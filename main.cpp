#include <iostream>
#include <string>
#include <algorithm>
#include<vector>

int main() {
    std::string encryptedstring = "MLV FCMX KJ KWQZ CQ QCMTDMVE KG MLV MVPPCMKPX KJ WCEEHV  IPCCPMXQL’V (WCEEHV CPMXQL PCUVP BDQCG). WKPV MLDG 14 MLKTQDGE  XVDPQ DOK IVKIHV QMDPMVE MK QVMMHV CG MLCQ HDGE. DGFCVGM IVKIHV  QVMMHVE DHKGO CPMXQL PCUVP, NLCFL NDQ OTCECGO IKCGM JKP MLV  WKUCGO KJ MPCBVQ ETPCGO DGFCVGM MCWVQ. MLV TGEVPMDZVG  DPFLVKHKOCFDH VYFDUDMCKGQ IPKUVE MLDM LTGMVPQ DGE JCQLVPWVG  HCUVE LVPV. LCQMKPX KJ MLV VYIHKPDMCKG KJ MLV CPMXQL PCUVP BDQCG  BX PTQQCDGQ CQ PVHDMVE MK MLV GDWV KJ HVOVGEDPX FKQQDFZ HVDEVP  XVPWDZ, NLK DGGVYVE QCBVPCD NCML CMQ GDMCUV IKITHDMCKG MK  PTQQCD CG 16ML FVGMTPX. CG 17ML FVGMTPX PTQQCDG JDPWVPQ DGE  FKQQDFZQ QMDPMVE MK QVMMHV CG QCBVPCDG MVPPCMKPX. MLV VGMCPV  18ML FVGMTPX NDQ WDPZVE BX D ZVVG JCOLM DODCGQM QCBVPCDG  GKWDECF MPCBVQ. CG 1716 WCHCMDPX VYIVECMCKG KJ HCVTMVGDGM  FKHKGVH CUDG BTZLKHMQ QVGM BX MLV KPEVP KJ MQDP IVMVP MLV OPVDM  MK JCGE OKHE DGE JTPQ JKTGEVE MLV JCPQM NKKEVG JKPMPVQQ DM MLV  WKTML KJ KW PCUVP. HDMVP MLCQ JKPM BVFDWV MLV DEWCGCQMPDMCUV,  IKHCMCFDH DGE FTHMTPDH FVGMPV. JPKW MLV UVPX BVOCGGCGO KWQZ  QVPUVE DQ D IHDFV KJ VYCHV. JPKW LVPV FKGUCFMQ NVPV QVGM MK KMLVP  QCBVPCDG JKPMPVQQVQ JKP MLV LDPE HDBKP. LDUCGO FKWIHVMVE MLVCP  LDPE HDBKP DGE CWIPCQKGWVGM, WDGX KJ MLVW QVMMHVE CG KWQZ.    FKGUCFMQ NKPV MLV FHKMLQ NCML XVHHKN DFV KG MLV BDFZ DGE JKKM-  CPKGQ NLCFL NVCOLMVE TI MK 4–5 ZO. D IVPQKG NDQ TGFLDCGVE KGHX    NLVG NVGM DM HDPOV KP ECVE. MLV IPCQKGVPQ KJ HCJV QMPVMFL NVPV  ITM MK MLV CPKG. MLVX NVPV WDPZVE KG MLVCP FLVVZQ DGE JKPVLVDE  NCML MLV HVMMVPQ BKI (NLCFL WVDGQ “MLV MLCVJ”) KP ZDM  (DBBPVUCDMCKG KJ MLV NKPE “ZDMKPAGCZ”, NLCFL WVDGQ “FKGUCFM”).  KGV KJ MLV WDCG WVMLKEQ KJ PVEVWIMCKG KJ MLV IPCQKGVPQ NDQ  FKPIKPDH ITGCQLWVGM QTFL DQ BVDMCGO NCML MNCOQ, FDGVQ DGE PKEQ.  ETPCGO MLV VYVFTMCKG IVKIHV KJMVG ECVE. VUVPX EDX FKGUCFMQ NVGM  MK NKPZ DM MLV BDGZ KJ MLV CPMXQL PCUVP. MLVPV MLVX MKKZ KHE  BKDMQ CGMK IDPMQ, BTPGM DGE BVVMHVE DHDBDQMVP, MVWIVPVE FHDX,  PDZV QGKN, PVIDCPVE MLV BTCHECGOQ CG MLV MKNG. VMLGCF  FKWIKQCMCKG KJ MLV PVOCKG LDE BVVG JKPWCGO ETPCGO MLV IPKFVQQ KJ  MLV MVPPCMKPX FKHKGCSDMCKG. PTQQCDGQ, OVPWDGQ, IKHVQ,  BVHDPTQCDGQ DGE IVKIHV KJ WDGX KMLVP GDMCKGDHCMCVQ NVPV QVGM  LVPV KG QVPUCFV KP CG VYCHV. HKFDH IVKIHV KJ MLV PVOCKG NVPV  QCBVPCDG MDMDPQ DGE ZDSDZLQ NLK FDWV MK D QVEVGMDPX HCJV.  ";
    // std::string encryptedstring = "MLV FCMX KJ KWQZ CQ QCMTDMVE KG MLV MVPPCMKPX KJ WCEEHV IPCCPMXQL’V (WCEEHV CPMXQL PCUVP BDQCG). WKPV MLDG 14 MLKTQDGE XVDPQ DOK IVKIHV QMDPMVE MK QVMMHV CG MLCQ HDGE. DGFCVGM IVKIHV QVMMHVE DHKGO CPMXQL PCUVP, NLCFL NDQ OTCECGO IKCGM JKP MLV WKUCGO KJ MPCBVQ ETPCGO DGFCVGM MCWVQ. MLV TGEVPMDZVG DPFLVKHKOCFDH VYFDUDMCKGQ IPKUVE MLDM LTGMVPQ DGE JCQLVPWVG HCUVE LVPV. LCQMKPX KJ MLV VYIHKPDMCKG KJ MLV CPMXQL PCUVP BDQCG BX PTQQCDGQ CQ PVHDMVE MK MLV GDWV KJ HVOVGEDPX FKQQDFZ HVDEVP XVPWDZ, NLK DGGVYVE QCBVPCD NCML CMQ GDMCUV IKITHDMCKG MK PTQQCD CG 16ML FVGMTPX. CG 17ML FVGMTPX PTQQCDG JDPWVPQ DGE FKQQDFZQ QMDPMVE MK QVMMHV CG QCBVPCDG MVPPCMKPX. MLV VGMCPV 18ML FVGMTPX NDQ WDPZVE BX D ZVVG JCOLM DODCGQM QCBVPCDG GKWDECF MPCBVQ. CG 1716 WCHCMDPX VYIVECMCKG KJ HCVTMVGDGM FKHKGVH CUDG BTZLKHMQ QVGM BX MLV KPEVP KJ MQDP IVMVP MLV OPVDM MK JCGE OKHE DGE JTPQ JKTGEVE MLV JCPQM NKKEVG JKPMPVQQ DM MLV WKTML KJ KW PCUVP. HDMVP MLCQ JKPM BVFDWV MLV DEWCGCQMPDMCUV, IKHCMCFDH DGE FTHMTPDH FVGMPV. JPKW MLV UVPX BVOCGGCGO KWQZ QVPUVE DQ D IHDFV KJ VYCHV. JPKW LVPV FKGUCFMQ NVPV QVGM MK KMLVP QCBVPCDG JKPMPVQQVQ JKP MLV LDPE HDBKP. LDUCGO FKWIHVMVE MLVCP LDPE HDBKP DGE CWIPCQKGWVGM, WDGX KJ MLVW QVMMHVE CG KWQZ.  FKGUCFMQ NKPV MLV FHKMLQ NCML XVHHKN DFV KG MLV BDFZ DGE JKKM- CPKGQ NLCFL NVCOLMVE TI MK 4–5 ZO. D IVPQKG NDQ TGFLDCGVE KGHX  NLVG NVGM DM HDPOV KP ECVE. MLV IPCQKGVPQ KJ HCJV QMPVMFL NVPV ITM MK MLV CPKG. MLVX NVPV WDPZVE KG MLVCP FLVVZQ DGE JKPVLVDE NCML MLV HVMMVPQ BKI (NLCFL WVDGQ “MLV MLCVJ”) KP ZDM (DBBPVUCDMCKG KJ MLV NKPE “ZDMKPAGCZ”, NLCFL WVDGQ “FKGUCFM”). KGV KJ MLV WDCG WVMLKEQ KJ PVEVWIMCKG KJ MLV IPCQKGVPQ NDQ FKPIKPDH ITGCQLWVGM QTFL DQ BVDMCGO NCML MNCOQ, FDGVQ DGE PKEQ. ETPCGO MLV VYVFTMCKG IVKIHV KJMVG ECVE. VUVPX EDX FKGUCFMQ NVGM MK NKPZ DM MLV BDGZ KJ MLV CPMXQL PCUVP. MLVPV MLVX MKKZ KHE BKDMQ CGMK IDPMQ, BTPGM DGE BVVMHVE DHDBDQMVP, MVWIVPVE FHDX, PDZV QGKN, PVIDCPVE MLV BTCHECGOQ CG MLV MKNG. VMLGCF FKWIKQCMCKG KJ MLV PVOCKG LDE BVVG JKPWCGO ETPCGO MLV IPKFVQQ KJ MLV MVPPCMKPX FKHKGCSDMCKG. PTQQCDGQ, OVPWDGQ, IKHVQ, BVHDPTQCDGQ DGE IVKIHV KJ WDGX KMLVP GDMCKGDHCMCVQ NVPV QVGM LVPV KG QVPUCFV KP CG VYCHV. HKFDH IVKIHV KJ MLV PVOCKG NVPV QCBVPCDG MDMDPQ DGE ZDSDZLQ NLK FDWV MK D QVEVGMDPX HCJV.";
    float frequency[26];
    char enchar[26];
    int counterSPEC = 0;
    int counterDIG=0;
    int n=0;
    int counterA = 0;
    int counterB = 0;
    int counterC = 0;
    int counterD = 0;
    int counterE = 0;
    int counterF = 0;
    int counterG = 0;
    int counterH = 0;
    int counterI = 0;
    int counterJ = 0;
    int counterK = 0;
    int counterL = 0;
    int counterM = 0;
    int counterN = 0;
    int counterO = 0;
    int counterP = 0;
    int counterQ = 0;
    int counterR = 0;
    int counterS = 0;
    int counterT = 0;
    int counterU = 0;
    int counterV = 0;
    int counterW = 0;
    int counterX = 0;
    int counterY = 0;
    int counterZ = 0;


    for (int i = 0; i < encryptedstring.size(); i++) {
        if (encryptedstring[i] == ('.')|| encryptedstring[i] == (',') || encryptedstring[i] == ('-') || encryptedstring[i] == (' ')||encryptedstring[i] == (':') || encryptedstring== ("'") )
         {
            counterSPEC++;
        }
        if (encryptedstring[i] == ('1')|| encryptedstring[i] == ('2') || encryptedstring[i] == ('3') || encryptedstring[i] == ('4')||encryptedstring[i] == ('5') ||encryptedstring[i] == ('6') ||encryptedstring[i] == ('7') ||encryptedstring[i] == ('8')||encryptedstring[i] == ('9') ||encryptedstring[i] == ('0'))
        {
            counterDIG++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 65)) {
            counterA++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 66)) {
            counterB++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 67)) {
            counterC++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 68)) {
            counterD++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 69)) {
            counterE++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 70)) {
            counterF++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 71)) {
            counterG++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 72)) {
            counterH++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 73)) {
            counterI++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 74)) {
            counterJ++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 75)) {
            counterK++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 76)) {
            counterL++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 77)) {
            counterM++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 78)) {
            counterN++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 79)) {
            counterO++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 80)) {
            counterP++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 81)) {
            counterQ++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 82)) {
            counterR++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(encryptedstring[i] == 83)) {
            counterS++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(
                encryptedstring[i] == 84)) {
            counterT++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(
                encryptedstring[i] ==
                85)) {
            counterU++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(
                encryptedstring[i] ==
                86)) {
            counterV++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(
                encryptedstring[i] ==
                87)) {
            counterW++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(
                encryptedstring[i] ==
                88)) {
            counterX++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(
                encryptedstring[i] ==
                89)) {
            counterY++;
        }
    }
    for (int i = 0; i < encryptedstring.size(); i++) {
        if (toascii(
                encryptedstring[i] ==
                90)) {
            counterZ++;
        }
    }
    for (int i=0; i < encryptedstring.size(); i++){
        n++;
    }
    std::cout<<"there are "  << n<< " symbols in the text"<< std::endl;
    std::cout<<"there are "<< counterSPEC<< " special symbols"<< std::endl;
    int denominator= n - counterSPEC - counterDIG;

    double frequencyA= 100* double(counterA) /denominator;
    std::cout<< "Frequency of A is: "<< frequencyA<<std::endl;

    double frequencyB= 100* double(counterB) /denominator;
    std::cout<< "Frequency of B is: "<< frequencyB<<std::endl;

    double frequencyC= 100* double(counterC) /denominator;
    std::cout<< "Frequency of C is: "<< frequencyC<<std::endl;

    double frequencyD= 100* double(counterD) /denominator;
    std::cout<< "Frequency of D is: "<< frequencyD<<std::endl;

    double frequencyE= 100* double(counterE) /denominator;
    std::cout<< "Frequency of E is: "<< frequencyE<<std::endl;

    double frequencyF= 100* double(counterF) /denominator;
    std::cout<< "Frequency of F is: "<< frequencyF<<std::endl;

    double frequencyG= 100* double(counterG) /denominator;
    std::cout<< "Frequency of G is: "<< frequencyG<<std::endl;

    double frequencyH= 100* double(counterH) /denominator;
    std::cout<< "Frequency of H is: "<< frequencyH<<std::endl;

    double frequencyI= 100* double(counterI) /denominator;
    std::cout<< "Frequency of I is: "<< frequencyI<<std::endl;

    double frequencyJ= 100* double(counterJ) /denominator;
    std::cout<< "Frequency of J is: "<< frequencyJ<<std::endl;

    double frequencyK= 100* double(counterK) /denominator;
    std::cout<< "Frequency of K is: "<< frequencyK<<std::endl;

    double frequencyL= 100* double(counterL) /denominator;
    std::cout<< "Frequency of L is: "<< frequencyL<<std::endl;

    double frequencyM= 100* double(counterM) /denominator;
    std::cout<< "Frequency of M is: "<< frequencyM<<std::endl;

    double frequencyN= 100* double(counterN) /denominator;
    std::cout<< "Frequency of N is: "<< frequencyN<<std::endl;

    double frequencyO= 100* double(counterO) /denominator;
    std::cout<< "Frequency of O is: "<< frequencyO<<std::endl;

    double frequencyP= 100* double(counterP) /denominator;
    std::cout<< "Frequency of P is: "<< frequencyP<<std::endl;

    double frequencyQ= 100* double(counterQ) /denominator;
    std::cout<< "Frequency of Q is: "<< frequencyQ<<std::endl;

    double frequencyR= 100* double(counterR) /denominator;
    std::cout<< "Frequency of R is: "<< frequencyR<<std::endl;

    double frequencyS= 100* double(counterS) /denominator;
    std::cout<< "Frequency of S is: "<< frequencyS<<std::endl;

    double frequencyT= 100* double(counterT) /denominator;
    std::cout<< "Frequency of T is: "<< frequencyT<<std::endl;

    double frequencyU= 100* double(counterU) /denominator;
    std::cout<< "Frequency of U is: "<< frequencyU<<std::endl;

    double frequencyV= 100* double(counterV) /denominator;
    std::cout<< "Frequency of V is: "<< frequencyV<<std::endl;

    double frequencyW= 100* double(counterW) /denominator;
    std::cout<< "Frequency of W is: "<< frequencyW<<std::endl;

    double frequencyX= 100* double(counterX) /denominator;
    std::cout<< "Frequency of X is: "<< frequencyX<<std::endl;

    double frequencyY= 100* double(counterY) /denominator;
    std::cout<< "Frequency of Y is: "<< frequencyY<<std::endl;

    double frequencyZ= 100* double(counterZ) /denominator;
    std::cout<< "Frequency of Z is: "<< frequencyZ<<std::endl;

    for(int i = 0; i < encryptedstring.length(); i++){
        switch (encryptedstring[i]) {
            case 'A':
                encryptedstring.replace(i,1,"J");//
                break;
            case 'B':
                encryptedstring.replace(i,1,"B");//
                break;
            case 'C':
                encryptedstring.replace(i,1,"I");//
                break;
            case 'D':
                encryptedstring.replace(i,1,"A");//
                break;
            case 'E':
                encryptedstring.replace(i,1,"D");//
                break;
            case 'F':
                encryptedstring.replace(i,1,"C");//
                break;
            case 'G':
                encryptedstring.replace(i,1,"N");//
                break;
            case 'H':
                encryptedstring.replace(i,1,"L");//
                break;
            case 'I':
                encryptedstring.replace(i,1,"P");//
                break;
            case 'J':
                encryptedstring.replace(i,1,"F");//
                break;
            case 'K':
                encryptedstring.replace(i,1,"O");//
                break;
            case 'L':
                encryptedstring.replace(i,1,"H");//
                break;
            case 'M':
                encryptedstring.replace(i,1,"T");//
                break;
            case 'N':
                encryptedstring.replace(i,1,"W");//
                break;
            case 'O':
                encryptedstring.replace(i,1,"G");//
                break;
            case 'P':
                encryptedstring.replace(i,1,"R");//
                break;
            case 'Q':
                encryptedstring.replace(i,1,"S");//
                break;
            case 'R':
                encryptedstring.replace(i,1,"?");//
                break;
            case 'S':
                encryptedstring.replace(i,1,"Z");//
                break;
            case 'T':
                encryptedstring.replace(i,1,"U");//
                break;
            case 'U':
                encryptedstring.replace(i,1,"V");//
                break;
            case 'V':
                encryptedstring.replace(i,1,"E");//
                break;
            case 'W':
                encryptedstring.replace(i,1,"M");//
                break;
            case 'X':
                encryptedstring.replace(i,1,"Y");//
                break;
            case 'Y':
                encryptedstring.replace(i,1,"X");//
                break;
            case 'Z':
                encryptedstring.replace(i,1,"K");//
                break;
        }

    }




    std::cout<< encryptedstring;



}


// SPDX-License-Identifier: GPL-3.0
pragma solidity ^0.8.4;
contract cal {
    uint8 num1 =20 ;
    uint8 num2 = 4;
    function adding( )  public view returns(uint ans ){
        ans = num1 + num2 ;
        return ans ;


    }

function sub( )  public view returns(uint ans ){
        ans = num1  - num2 ;
        return ans ;


    }

function mul( )  public view returns(uint ans ){
        ans = num1 * num2 ;
        return ans ;


    }
function divi( )  public view returns(uint ans ){
        ans = num1 / num2 ;
        return ans ;


    }

}
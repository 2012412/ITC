// SPDX-License-Identifier: GPL-3.0
pragma solidity ^0.8.4;

//contract myfirst{
// uint public numberofnft;
//function addnft() public {
//numberofnft +=1;

// }
// function delenft() public {
// numberofnft -=1;

// }
//}

// data type

contract DATATYPE {
    bool public hy; // boolean true false
    bool public number = true;

    // uint is a samll  value  uint 256 is large value  uint is used for posyive value int used for negitive value

    uint256 public u8 = 8;
    uint256 public u256 = 9;
    // max and mini value

    uint256 public maxuint = type(uint256).max;
    uint256 public minuint = type(uint256).min;

    // array we used bytes
    bytes1 public number1 = 0xb7;
    bytes1 public number2 = 0x6b;

    // address type

    address public numb = 0x5B38Da6a701c568545dCfcB03FcB875f56beddC4;
}

contract LEARNFUNCTION {
    uint256 hey; // we acn also put public

    function getinfo() public view returns (uint256) {
        return hey;
    }

    function updatedata(uint256 _hey) public {
        hey = _hey;
    }
    function get(uint256 _a, uint _b) public returns (uint){
        uint256 newnumber = _a + _b ;
        hey =newnumber;
        return  hey ;
    }

    
}
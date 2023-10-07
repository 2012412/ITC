//SPDX-License-Identifier: MIT
pragma solidity ^0.8.10;
contract lec{
    //address[] public white;
    mapping(address => mapping(uint =>  uint256)) balances;
    event Transfer(address sender,  address recipient,uint amount);
    receive() external payable { 
        require(msg.value >= 1 ether, "error!");
        setBalances();

    }
    function setBalances(uint amount) internal 
     {
        
        balances[msg.sender] [block.timestamp]=1000;
        //white.push(msg.sender);



    }
    // function transfer(address recipient,uint amount) public   {
    //     require(amount <= balances[msg.sender],"insufficient amount");
    //     balances[msg.sender] -= amount ;
    //     balances[recipient] += amount ;
    //     emit Transfer(msg.sender,recipient,amount);


    // }
    //  function getwhite() public view returns(address[] memory){
    //     return white;
    //  }
    //function print () public pure returns(string memory){
       // return "hello world";
    }
    
 
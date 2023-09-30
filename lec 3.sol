// SPDX-License-Identifier: GPL-3.0
pragma solidity ^0.8.4;

contract lecture03 {
    mapping (address=> uint256 ) public balances;

    modifier checkValue()
    {
        require(msg.value >= 1 ether, "error");
        _;
    }

    event BalanceIsSet(address);
    function setBalance() public {
        balances[address(this)] = 100;
        emit BalanceIsSet (msg.sender);
    }
    function getBalanceOfThis() public view returns (uint256){
        return balances[address(this)];
    }
    // function setBalanceWithParameter(address wallet, uint256 amount) public{
    //     require(amount >= 100, "low balance");
    //     require(wallet != address(0) , "zero address detected");

    //     balances[wallet] = amount;
    // }
    // function addBalance(address wallet) public{
    //     balances[wallet] += 100;
    // }

    // function transfer (address sender, address recipient, uint256 amount) private returns(bool){
    //     balances[sender] -= amount;
    //     balances[recipient] += amount;
    //     return true;
    // }

}
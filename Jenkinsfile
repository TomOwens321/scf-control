// @Library('shared-libs@development')
// import com.towens.*

library( identifier: 'sharedlibs@development', retriever: modernSCM(
    [$class: 'GitSCMSource',
     remote: 'https://github.com/TomOwens321/sharedlibs.git']))_
import com.towens.*

node('bbone') {
    stage('Checkout') {
        cf = new com.towens.checkoutFuncs()
        cf.checkoutWithRetries()
    }

    stage('Test') {
        sh = new com.towens.sayHello()
        sh.sayHello('TomO')
        sh 'build/ardverify.sh'
    }
}
